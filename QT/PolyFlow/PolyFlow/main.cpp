#include <qapplication.h>
#include <qwidget.h>
#include <qlabel.h>
#include <qstring.h>
#include <qpushbutton.h>
#include <qtranslator.h>
#include <qgridlayout.h>

int main(int argc, char* argv[]) {

	QApplication app(argc, argv);

	QWidget mainFrame;

	mainFrame.setWindowTitle("PolyFlow");
	mainFrame.setMinimumWidth(1280);
	mainFrame.setMinimumHeight(720);
	
	QPalette testColor;
	testColor.setColor(QPalette::Active,QPalette::ColorRole::ButtonText, QColor(150,0,250));

	QPushButton testButton{ "test" };
	testButton.setPalette(testColor);
	testButton.setAutoFillBackground(true);

	QPushButton testButton2("sheet", &mainFrame);

	QGridLayout g(&mainFrame);
	g.addWidget(&testButton,0,0);
	g.addWidget(&testButton2,1,1);



	mainFrame.show();
	return app.exec();

}