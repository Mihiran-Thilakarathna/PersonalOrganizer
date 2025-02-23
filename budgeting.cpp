#include "budgeting.h"
#include "ui_budgeting.h"

budgeting::budgeting(int userId, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::budgeting),
    loggedInUserId(userId) // Set loggedInUserId to the passed userId
{
    ui->setupUi(this);
    setupDatabase();
    loadCategories();
    displayBudgets();

    // Connect the Add button to its slot
    connect(ui->addButton, &QPushButton::clicked, this, &budgeting::onAddButtonClicked);
}

budgeting::~budgeting()
{
    delete ui;
}

// Function to initialize database and create budgeting table if not exists
void budgeting::setupDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("PODB.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Failed to open the database.");
        return;
    }

    QSqlQuery query;
    QString createTableQuery = R"(
        CREATE TABLE IF NOT EXISTS budgeting (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            user_id INTEGER,
            category TEXT,
            amount REAL,
            date TEXT
        )
    )";

    if (!query.exec(createTableQuery)) {
        QMessageBox::critical(this, "Database Error", "Failed to create budgeting table.");
    }
}

// Function to load categories into the combo box
void budgeting::loadCategories()
{
    ui->categoryComboBox->addItem("Food");
    ui->categoryComboBox->addItem("Entertainment");
    ui->categoryComboBox->addItem("Traveling");
    ui->categoryComboBox->addItem("Clothing");
    ui->categoryComboBox->addItem("Education Equipment");
    ui->categoryComboBox->addItem("University Fees");
    ui->categoryComboBox->addItem("Other");
}

// Slot for Add button click to insert a new budget entry
void budgeting::onAddButtonClicked()
{
    QString category = ui->categoryComboBox->currentText();
    double amount = ui->amountInput->text().toDouble();
    int user_id = loggedInUserId; // Use the logged-in user ID

    QSqlQuery query;
    query.prepare("INSERT INTO budgeting (user_id, category, amount, date) VALUES (?, ?, ?, datetime('now'))");
    query.addBindValue(user_id);
    query.addBindValue(category);
    query.addBindValue(amount);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to add budget entry.");
        return;
    }

    displayBudgets(); // Refresh the table widget after adding the entry
}


}
