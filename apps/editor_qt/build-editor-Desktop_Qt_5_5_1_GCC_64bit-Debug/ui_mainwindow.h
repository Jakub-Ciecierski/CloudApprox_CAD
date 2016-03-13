/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"
#include "objecttreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLeft_Eye_Color;
    QAction *actionRight_Eye_Color;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QFrame *headerFrame;
    QHBoxLayout *horizontalLayout;
    QCheckBox *threeDCheckBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QFrame *line_4;
    QSpacerItem *horizontalSpacer;
    QFrame *mainFrame;
    QHBoxLayout *horizontalLayout_9;
    QSplitter *renderToPropertiesSplitter;
    QSplitter *objectsTreeToRenderSplitter;
    ObjectTreeWidget *allObjectsTree;
    GLWidget *sceneRendererWidget;
    QFrame *scenePropertiesFrame;
    QVBoxLayout *verticalLayout;
    QSplitter *properitesSplitter;
    QTreeWidget *sceneTree;
    QFrame *propertiesFrame;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *propertiesScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *positionFrame;
    QVBoxLayout *verticalLayout_3;
    QLabel *positionLabel;
    QFrame *line;
    QFrame *positionXFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *positionXLabel;
    QLineEdit *positionXInput;
    QSlider *positionXSlider;
    QFrame *positionYFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *positionYLabel;
    QLineEdit *positionYInput;
    QSlider *positionYSlider;
    QFrame *positionZFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *positionZLabel;
    QLineEdit *positionZInput;
    QSlider *positionZSlider;
    QFrame *anglesFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QFrame *line_2;
    QFrame *angleXFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *angleXLabel;
    QLineEdit *angleXInput;
    QSlider *angleXSlider;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *angleYLabel;
    QLineEdit *angleYInput;
    QSlider *angleYSlider;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *angleZLabel;
    QLineEdit *angleZInput;
    QSlider *angleZSlider;
    QFrame *scaleFrame;
    QVBoxLayout *verticalLayout_7;
    QLabel *scaleLabel;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *scaleInput;
    QSlider *scaleSlider;
    QFrame *specialFrame;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QFrame *line_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuSettings;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(974, 653);
        MainWindow->setStyleSheet(QLatin1String("/*\n"
"	Copyright 2013 Emanuel Claesson\n"
"\n"
"	Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"	you may not use this file except in compliance with the License.\n"
"	You may obtain a copy of the License at\n"
"\n"
"		http://www.apache.org/licenses/LICENSE-2.0\n"
"\n"
"	Unless required by applicable law or agreed to in writing, software\n"
"	distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"	See the License for the specific language governing permissions and\n"
"	limitations under the License.\n"
"*/\n"
"\n"
"/*\n"
"	COLOR_DARK     = #191919\n"
"	COLOR_MEDIUM   = #353535\n"
"	COLOR_MEDLIGHT = #5A5A5A\n"
"	COLOR_LIGHT    = #DDDDDD\n"
"	COLOR_ACCENT   = #3D7848\n"
"*/\n"
"\n"
"* {\n"
"	background: #191919;\n"
"	color: #DDDDDD;\n"
"	border: 1px solid #5A5A5A;\n"
"}\n"
"\n"
"QWidget::item:selected {\n"
"	background: #3D7848;\n"
"}\n"
"\n"
"QCheckBox, QRadioButton {\n"
"	border: none;\n"
"}\n"
""
                        "\n"
"QRadioButton::indicator, QCheckBox::indicator {\n"
"	width: 13px;\n"
"	height: 13px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked, QCheckBox::indicator::unchecked {\n"
"	border: 1px solid #5A5A5A;\n"
"	background: none;\n"
"}\n"
"\n"
"QRadioButton::indicator:unchecked:hover, QCheckBox::indicator:unchecked:hover {\n"
"	border: 1px solid #DDDDDD;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked, QCheckBox::indicator::checked {\n"
"	border: 1px solid #5A5A5A;\n"
"	background: #5A5A5A;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked:hover, QCheckBox::indicator:checked:hover {\n"
"	border: 1px solid #DDDDDD;\n"
"	background: #DDDDDD;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	margin-top: 6px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	top: -7px;\n"
"	left: 7px;\n"
"}\n"
"\n"
"QScrollBar {\n"
"	border: 1px solid #5A5A5A;\n"
"	background: #191919;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"	height: 15px;\n"
"	margin: 0px 0px 0px 32px;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"	width: 15px;\n"
"	margin: 32px 0px 0px 0px;\n"
""
                        "}\n"
"\n"
"QScrollBar::handle {\n"
"	background: #353535;\n"
"	border: 1px solid #5A5A5A;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	border-width: 0px 1px 0px 1px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"	border-width: 1px 0px 1px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	min-width: 20px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"	min-height: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line, QScrollBar::sub-line {\n"
"	background:#353535;\n"
"	border: 1px solid #5A5A5A;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line {\n"
"	position: absolute;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"	width: 15px;\n"
"	subcontrol-position: left;\n"
"	left: 15px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"	height: 15px;\n"
"	subcontrol-position: top;\n"
"	top: 15px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"	width: 15px;\n"
"	subcontrol-position: top left;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"	height: 15px;\n"
"	subcontrol-position"
                        ": top;\n"
"}\n"
"\n"
"QScrollBar:left-arrow, QScrollBar::right-arrow, QScrollBar::up-arrow, QScrollBar::down-arrow {\n"
"	border: 1px solid #5A5A5A;\n"
"	width: 3px;\n"
"	height: 3px;\n"
"}\n"
"\n"
"QScrollBar::add-page, QScrollBar::sub-page {\n"
"	background: none;\n"
"}\n"
"\n"
"QAbstractButton:hover {\n"
"	background: #353535;\n"
"}\n"
"\n"
"QAbstractButton:pressed {\n"
"	background: #5A5A5A;\n"
"}\n"
"\n"
"QAbstractItemView {\n"
"	show-decoration-selected: 1;\n"
"	selection-background-color: #3D7848;\n"
"	selection-color: #DDDDDD;\n"
"	alternate-background-color: #353535;\n"
"}\n"
"\n"
"QHeaderView {\n"
"	border: 1px solid #5A5A5A;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"	background: #191919;\n"
"	border: 1px solid #5A5A5A;\n"
"	padding: 4px;\n"
"}\n"
"\n"
"QHeaderView::section:selected, QHeaderView::section::checked {\n"
"	background: #353535;\n"
"}\n"
"\n"
"QTableView {\n"
"	gridline-color: #5A5A5A;\n"
"}\n"
"\n"
"QTabBar {\n"
"	margin-left: 2px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"	border-radius: 0px;\n"
""
                        "	padding: 4px;\n"
"	margin: 4px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"	background: #353535;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	border: 1px solid #5A5A5A;\n"
"	background: #353535;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"	border: 1px solid #5A5A5A;\n"
"	background: #353535;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"	width: 3px;\n"
"	height: 3px;\n"
"	border: 1px solid #5A5A5A;\n"
"}\n"
"\n"
"QAbstractSpinBox {\n"
"	padding-right: 15px;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-button, QAbstractSpinBox::down-button {\n"
"	border: 1px solid #5A5A5A;\n"
"	background: #353535;\n"
"	subcontrol-origin: border;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-arrow, QAbstractSpinBox::down-arrow {\n"
"	width: 3px;\n"
"	height: 3px;\n"
"	border: 1px solid #5A5A5A;\n"
"}\n"
"\n"
"QSlider {\n"
"	border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	margin: 4px 0px 4px 0px;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	margin: 0px 4px 0px 4px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
""
                        "	border: 1px solid #5A5A5A;\n"
"	background: #353535;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	width: 15px;\n"
"	margin: -4px 0px -4px 0px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"	height: 15px;\n"
"	margin: 0px -4px 0px -4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical, QSlider::sub-page:horizontal {\n"
"	background: #3D7848;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical, QSlider::add-page:horizontal {\n"
"	background: #353535;\n"
"}\n"
"\n"
"QLabel {\n"
"	border: none;\n"
"}\n"
"\n"
"QProgressBar {\n"
"	text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	width: 1px;\n"
"	background-color: #3D7848;\n"
"}\n"
"\n"
"QMenu::separator {\n"
"	background: #353535;\n"
"}"));
        actionLeft_Eye_Color = new QAction(MainWindow);
        actionLeft_Eye_Color->setObjectName(QStringLiteral("actionLeft_Eye_Color"));
        actionRight_Eye_Color = new QAction(MainWindow);
        actionRight_Eye_Color->setObjectName(QStringLiteral("actionRight_Eye_Color"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        headerFrame = new QFrame(centralWidget);
        headerFrame->setObjectName(QStringLiteral("headerFrame"));
        headerFrame->setMinimumSize(QSize(0, 39));
        headerFrame->setMaximumSize(QSize(16777215, 35));
        headerFrame->setFrameShape(QFrame::StyledPanel);
        headerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(headerFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        threeDCheckBox = new QCheckBox(headerFrame);
        threeDCheckBox->setObjectName(QStringLiteral("threeDCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(threeDCheckBox->sizePolicy().hasHeightForWidth());
        threeDCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(threeDCheckBox);

        label_3 = new QLabel(headerFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(headerFrame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(35, 45));

        horizontalLayout->addWidget(lineEdit);

        line_4 = new QFrame(headerFrame);
        line_4->setObjectName(QStringLiteral("line_4"));
        sizePolicy.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_8->addWidget(headerFrame);

        mainFrame = new QFrame(centralWidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(mainFrame->sizePolicy().hasHeightForWidth());
        mainFrame->setSizePolicy(sizePolicy1);
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(mainFrame);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        renderToPropertiesSplitter = new QSplitter(mainFrame);
        renderToPropertiesSplitter->setObjectName(QStringLiteral("renderToPropertiesSplitter"));
        renderToPropertiesSplitter->setOrientation(Qt::Horizontal);
        renderToPropertiesSplitter->setHandleWidth(5);
        objectsTreeToRenderSplitter = new QSplitter(renderToPropertiesSplitter);
        objectsTreeToRenderSplitter->setObjectName(QStringLiteral("objectsTreeToRenderSplitter"));
        objectsTreeToRenderSplitter->setOrientation(Qt::Horizontal);
        objectsTreeToRenderSplitter->setHandleWidth(5);
        allObjectsTree = new ObjectTreeWidget(objectsTreeToRenderSplitter);
        allObjectsTree->setObjectName(QStringLiteral("allObjectsTree"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(allObjectsTree->sizePolicy().hasHeightForWidth());
        allObjectsTree->setSizePolicy(sizePolicy2);
        allObjectsTree->setMinimumSize(QSize(0, 0));
        allObjectsTree->setMaximumSize(QSize(300, 16777215));
        objectsTreeToRenderSplitter->addWidget(allObjectsTree);
        sceneRendererWidget = new GLWidget(objectsTreeToRenderSplitter);
        sceneRendererWidget->setObjectName(QStringLiteral("sceneRendererWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(6);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sceneRendererWidget->sizePolicy().hasHeightForWidth());
        sceneRendererWidget->setSizePolicy(sizePolicy3);
        objectsTreeToRenderSplitter->addWidget(sceneRendererWidget);
        renderToPropertiesSplitter->addWidget(objectsTreeToRenderSplitter);
        scenePropertiesFrame = new QFrame(renderToPropertiesSplitter);
        scenePropertiesFrame->setObjectName(QStringLiteral("scenePropertiesFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scenePropertiesFrame->sizePolicy().hasHeightForWidth());
        scenePropertiesFrame->setSizePolicy(sizePolicy4);
        scenePropertiesFrame->setFrameShape(QFrame::StyledPanel);
        scenePropertiesFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(scenePropertiesFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        properitesSplitter = new QSplitter(scenePropertiesFrame);
        properitesSplitter->setObjectName(QStringLiteral("properitesSplitter"));
        properitesSplitter->setOrientation(Qt::Vertical);
        properitesSplitter->setHandleWidth(5);
        sceneTree = new QTreeWidget(properitesSplitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("Scene"));
        sceneTree->setHeaderItem(__qtreewidgetitem);
        sceneTree->setObjectName(QStringLiteral("sceneTree"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(7);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(sceneTree->sizePolicy().hasHeightForWidth());
        sceneTree->setSizePolicy(sizePolicy5);
        properitesSplitter->addWidget(sceneTree);
        propertiesFrame = new QFrame(properitesSplitter);
        propertiesFrame->setObjectName(QStringLiteral("propertiesFrame"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(2);
        sizePolicy6.setVerticalStretch(5);
        sizePolicy6.setHeightForWidth(propertiesFrame->sizePolicy().hasHeightForWidth());
        propertiesFrame->setSizePolicy(sizePolicy6);
        propertiesFrame->setFrameShape(QFrame::StyledPanel);
        propertiesFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(propertiesFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        propertiesScrollArea = new QScrollArea(propertiesFrame);
        propertiesScrollArea->setObjectName(QStringLiteral("propertiesScrollArea"));
        propertiesScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 468, 465));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        positionFrame = new QFrame(scrollAreaWidgetContents);
        positionFrame->setObjectName(QStringLiteral("positionFrame"));
        sizePolicy4.setHeightForWidth(positionFrame->sizePolicy().hasHeightForWidth());
        positionFrame->setSizePolicy(sizePolicy4);
        positionFrame->setMaximumSize(QSize(16777215, 180));
        positionFrame->setFrameShape(QFrame::StyledPanel);
        positionFrame->setFrameShadow(QFrame::Raised);
        positionFrame->setLineWidth(1);
        verticalLayout_3 = new QVBoxLayout(positionFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        positionLabel = new QLabel(positionFrame);
        positionLabel->setObjectName(QStringLiteral("positionLabel"));
        sizePolicy4.setHeightForWidth(positionLabel->sizePolicy().hasHeightForWidth());
        positionLabel->setSizePolicy(sizePolicy4);
        positionLabel->setMaximumSize(QSize(16777215, 15));
        positionLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(positionLabel);

        line = new QFrame(positionFrame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        positionXFrame = new QFrame(positionFrame);
        positionXFrame->setObjectName(QStringLiteral("positionXFrame"));
        sizePolicy4.setHeightForWidth(positionXFrame->sizePolicy().hasHeightForWidth());
        positionXFrame->setSizePolicy(sizePolicy4);
        positionXFrame->setMaximumSize(QSize(16777215, 42));
        positionXFrame->setFrameShape(QFrame::StyledPanel);
        positionXFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(positionXFrame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        positionXLabel = new QLabel(positionXFrame);
        positionXLabel->setObjectName(QStringLiteral("positionXLabel"));
        positionXLabel->setMaximumSize(QSize(35, 35));
        QFont font;
        font.setPointSize(9);
        positionXLabel->setFont(font);

        horizontalLayout_2->addWidget(positionXLabel);

        positionXInput = new QLineEdit(positionXFrame);
        positionXInput->setObjectName(QStringLiteral("positionXInput"));
        positionXInput->setMaximumSize(QSize(45, 35));

        horizontalLayout_2->addWidget(positionXInput);

        positionXSlider = new QSlider(positionXFrame);
        positionXSlider->setObjectName(QStringLiteral("positionXSlider"));
        positionXSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(positionXSlider);


        verticalLayout_3->addWidget(positionXFrame);

        positionYFrame = new QFrame(positionFrame);
        positionYFrame->setObjectName(QStringLiteral("positionYFrame"));
        sizePolicy4.setHeightForWidth(positionYFrame->sizePolicy().hasHeightForWidth());
        positionYFrame->setSizePolicy(sizePolicy4);
        positionYFrame->setMaximumSize(QSize(16777215, 42));
        positionYFrame->setFrameShape(QFrame::StyledPanel);
        positionYFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(positionYFrame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        positionYLabel = new QLabel(positionYFrame);
        positionYLabel->setObjectName(QStringLiteral("positionYLabel"));
        positionYLabel->setMaximumSize(QSize(35, 35));
        positionYLabel->setFont(font);

        horizontalLayout_3->addWidget(positionYLabel);

        positionYInput = new QLineEdit(positionYFrame);
        positionYInput->setObjectName(QStringLiteral("positionYInput"));
        positionYInput->setMaximumSize(QSize(45, 35));

        horizontalLayout_3->addWidget(positionYInput);

        positionYSlider = new QSlider(positionYFrame);
        positionYSlider->setObjectName(QStringLiteral("positionYSlider"));
        positionYSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(positionYSlider);


        verticalLayout_3->addWidget(positionYFrame);

        positionZFrame = new QFrame(positionFrame);
        positionZFrame->setObjectName(QStringLiteral("positionZFrame"));
        sizePolicy4.setHeightForWidth(positionZFrame->sizePolicy().hasHeightForWidth());
        positionZFrame->setSizePolicy(sizePolicy4);
        positionZFrame->setMaximumSize(QSize(16777215, 42));
        positionZFrame->setFrameShape(QFrame::StyledPanel);
        positionZFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(positionZFrame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        positionZLabel = new QLabel(positionZFrame);
        positionZLabel->setObjectName(QStringLiteral("positionZLabel"));
        positionZLabel->setFont(font);

        horizontalLayout_4->addWidget(positionZLabel);

        positionZInput = new QLineEdit(positionZFrame);
        positionZInput->setObjectName(QStringLiteral("positionZInput"));
        positionZInput->setMaximumSize(QSize(45, 35));

        horizontalLayout_4->addWidget(positionZInput);

        positionZSlider = new QSlider(positionZFrame);
        positionZSlider->setObjectName(QStringLiteral("positionZSlider"));
        positionZSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(positionZSlider);


        verticalLayout_3->addWidget(positionZFrame);


        verticalLayout_5->addWidget(positionFrame);

        anglesFrame = new QFrame(scrollAreaWidgetContents);
        anglesFrame->setObjectName(QStringLiteral("anglesFrame"));
        sizePolicy4.setHeightForWidth(anglesFrame->sizePolicy().hasHeightForWidth());
        anglesFrame->setSizePolicy(sizePolicy4);
        anglesFrame->setMaximumSize(QSize(16777215, 180));
        anglesFrame->setFrameShape(QFrame::StyledPanel);
        anglesFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(anglesFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(anglesFrame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 15));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        line_2 = new QFrame(anglesFrame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        angleXFrame = new QFrame(anglesFrame);
        angleXFrame->setObjectName(QStringLiteral("angleXFrame"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(7);
        sizePolicy7.setHeightForWidth(angleXFrame->sizePolicy().hasHeightForWidth());
        angleXFrame->setSizePolicy(sizePolicy7);
        angleXFrame->setMaximumSize(QSize(16777215, 42));
        angleXFrame->setFrameShape(QFrame::StyledPanel);
        angleXFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(angleXFrame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        angleXLabel = new QLabel(angleXFrame);
        angleXLabel->setObjectName(QStringLiteral("angleXLabel"));
        angleXLabel->setMaximumSize(QSize(45, 45));
        angleXLabel->setFont(font);

        horizontalLayout_5->addWidget(angleXLabel);

        angleXInput = new QLineEdit(angleXFrame);
        angleXInput->setObjectName(QStringLiteral("angleXInput"));
        angleXInput->setMinimumSize(QSize(0, 0));
        angleXInput->setMaximumSize(QSize(45, 35));

        horizontalLayout_5->addWidget(angleXInput);

        angleXSlider = new QSlider(angleXFrame);
        angleXSlider->setObjectName(QStringLiteral("angleXSlider"));
        angleXSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(angleXSlider);


        verticalLayout_4->addWidget(angleXFrame);

        frame_5 = new QFrame(anglesFrame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        sizePolicy7.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy7);
        frame_5->setMaximumSize(QSize(16777215, 42));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        angleYLabel = new QLabel(frame_5);
        angleYLabel->setObjectName(QStringLiteral("angleYLabel"));
        angleYLabel->setFont(font);

        horizontalLayout_6->addWidget(angleYLabel);

        angleYInput = new QLineEdit(frame_5);
        angleYInput->setObjectName(QStringLiteral("angleYInput"));
        angleYInput->setMaximumSize(QSize(45, 35));

        horizontalLayout_6->addWidget(angleYInput);

        angleYSlider = new QSlider(frame_5);
        angleYSlider->setObjectName(QStringLiteral("angleYSlider"));
        angleYSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(angleYSlider);


        verticalLayout_4->addWidget(frame_5);

        frame_6 = new QFrame(anglesFrame);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        sizePolicy7.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy7);
        frame_6->setMaximumSize(QSize(16777215, 42));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_6);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        angleZLabel = new QLabel(frame_6);
        angleZLabel->setObjectName(QStringLiteral("angleZLabel"));
        angleZLabel->setFont(font);

        horizontalLayout_7->addWidget(angleZLabel);

        angleZInput = new QLineEdit(frame_6);
        angleZInput->setObjectName(QStringLiteral("angleZInput"));
        angleZInput->setMaximumSize(QSize(45, 35));

        horizontalLayout_7->addWidget(angleZInput);

        angleZSlider = new QSlider(frame_6);
        angleZSlider->setObjectName(QStringLiteral("angleZSlider"));
        angleZSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(angleZSlider);


        verticalLayout_4->addWidget(frame_6);

        label_5->raise();
        angleXFrame->raise();
        frame_5->raise();
        frame_6->raise();
        line_2->raise();

        verticalLayout_5->addWidget(anglesFrame);

        scaleFrame = new QFrame(scrollAreaWidgetContents);
        scaleFrame->setObjectName(QStringLiteral("scaleFrame"));
        scaleFrame->setMaximumSize(QSize(16777215, 60));
        scaleFrame->setFrameShape(QFrame::StyledPanel);
        scaleFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(scaleFrame);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scaleLabel = new QLabel(scaleFrame);
        scaleLabel->setObjectName(QStringLiteral("scaleLabel"));
        scaleLabel->setMaximumSize(QSize(16777215, 15));
        scaleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(scaleLabel);

        frame = new QFrame(scaleFrame);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setMaximumSize(QSize(16777215, 42));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_8->addWidget(label_2);

        scaleInput = new QLineEdit(frame);
        scaleInput->setObjectName(QStringLiteral("scaleInput"));
        scaleInput->setMaximumSize(QSize(45, 35));

        horizontalLayout_8->addWidget(scaleInput);

        scaleSlider = new QSlider(frame);
        scaleSlider->setObjectName(QStringLiteral("scaleSlider"));
        scaleSlider->setMaximumSize(QSize(16777215, 10000));
        scaleSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(scaleSlider);


        verticalLayout_7->addWidget(frame);


        verticalLayout_5->addWidget(scaleFrame);

        specialFrame = new QFrame(scrollAreaWidgetContents);
        specialFrame->setObjectName(QStringLiteral("specialFrame"));
        specialFrame->setMaximumSize(QSize(16777215, 50));
        specialFrame->setFrameShape(QFrame::StyledPanel);
        specialFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(specialFrame);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label = new QLabel(specialFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(123123, 15));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label);

        line_3 = new QFrame(specialFrame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);


        verticalLayout_5->addWidget(specialFrame);

        propertiesScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(propertiesScrollArea);

        properitesSplitter->addWidget(propertiesFrame);

        verticalLayout->addWidget(properitesSplitter);

        renderToPropertiesSplitter->addWidget(scenePropertiesFrame);

        horizontalLayout_9->addWidget(renderToPropertiesSplitter);


        verticalLayout_8->addWidget(mainFrame);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 974, 27));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuSettings = new QMenu(menuEdit);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuEdit->addAction(menuSettings->menuAction());
        menuSettings->addAction(actionLeft_Eye_Color);
        menuSettings->addAction(actionRight_Eye_Color);

        retranslateUi(MainWindow);
        QObject::connect(threeDCheckBox, SIGNAL(toggled(bool)), sceneRendererWidget, SLOT(set3DRendering(bool)));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), sceneRendererWidget, SLOT(set3DDistance(QString)));
        QObject::connect(actionLeft_Eye_Color, SIGNAL(triggered()), sceneRendererWidget, SLOT(leftEyeColorPicker()));
        QObject::connect(actionRight_Eye_Color, SIGNAL(triggered()), sceneRendererWidget, SLOT(rightEyeColorPicker()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Editor", 0));
        actionLeft_Eye_Color->setText(QApplication::translate("MainWindow", "Left Eye Color", 0));
        actionRight_Eye_Color->setText(QApplication::translate("MainWindow", "Right Eye Color", 0));
        threeDCheckBox->setText(QApplication::translate("MainWindow", "3D", 0));
        label_3->setText(QApplication::translate("MainWindow", "e", 0));
        QTreeWidgetItem *___qtreewidgetitem = allObjectsTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Objects", 0));
        positionLabel->setText(QApplication::translate("MainWindow", "Position", 0));
        positionXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        positionYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        positionZLabel->setText(QApplication::translate("MainWindow", "Z", 0));
        label_5->setText(QApplication::translate("MainWindow", "Rotation", 0));
        angleXLabel->setText(QApplication::translate("MainWindow", "X", 0));
        angleYLabel->setText(QApplication::translate("MainWindow", "Y", 0));
        angleZLabel->setText(QApplication::translate("MainWindow", "Z", 0));
        scaleLabel->setText(QApplication::translate("MainWindow", "Scale", 0));
        label_2->setText(QApplication::translate("MainWindow", "s", 0));
        label->setText(QApplication::translate("MainWindow", "Special", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "3D", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
