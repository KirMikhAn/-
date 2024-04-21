#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QPushButton button("Нажми меня");
    button.setFixedSize(300, 200);
    QObject::connect(&button, &QPushButton::clicked, & {
        QMessageBox::information(nullptr, "Сообщение", "Вы нажали кнопку!");
        QApplication::quit();
    });

    button.show();

    return app.exec();
}
