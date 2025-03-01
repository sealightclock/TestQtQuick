#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // Load the QML module named "transitions", starting from Main.qml
    engine.loadFromModule("transitions", "Main");

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
