Tianchi2
========
Version 0.2.0.1 Build 2015.01.23

��ؿ�Դ����� for Qt5.x
##Tianchi ��Ϊ��ʹ�ã��ѳ��õ�λ�㼯��һ��ļ���⡣<br/>

###�� QtCreator / QtDesigner �ܹ������ʱʹ�� Tianchi �Ŀ��ӻ��ؼ���

�� bin/designer/tianchi4qtc.dll ���Ƶ���C:\\Qt\\Qt5.4.0\\Tools\\QtCreator\\bin\\plugins\\designer<br/>
�����Ҫ����ʹ�� QtDesigner: �븴�Ƶ���C:\\Qt\\Qt5.4.0\\5.4\\mingw491_32\\plugins\\designer<br/>
<br/>
###Tianchi ���ʹ�÷���

####1. �����ֱ��ʹ�÷�ʽ��ֱ�Ӱ���Դ����룩��
�����Ĺ����ļ�(xxx.pro)��ֱ�Ӱ��� tianchi.pri, ���磺<br/>

    include (.../tianchi/myProject.pri)
����������һ�� tianchi.pri �ļ����򿪲�ɾ��������Ҫ�İ�����Ԫ��<br/>

####2. ��̬���ӿⷽʽ
�򿪲����� tianchi/tianchi.pro , ���ɶ�̬���ӿ�<br/>
�����ɶ�̬���ӿ⣺bin/Qt5Tianchi.dll(.so)<br/>
�Լ����ɱ������ӿ⣺bin/Qt5Tianchi.lib(.a)<br/>
�� Debug ģʽ���ļ�����׷��һ�� d ��ĸ��<br/>
<br/>
ʹ��ʱ�ѱ������ӿ�ӵ� .pro �У�<br/>

    LIBS += -lQt5Tianchi
�������ʱ�Ҳ��������ӿ⣬��׷��ָ��Ŀ¼��<br/>

    LIBS += -L.../tianchi/bin
Debug / Release �Զ�ʶ�����ӵķ�ʽ�ǣ�<br/>

    Debug: -lQt5Tianchid
    Release: -lQt5Tianchi
####3. ��̬���ӿ�
�򿪹����ļ������� tianchi/tianchi_lib.pro , ���ɾ�̬���ӿ�<br/>
�����ɾ�̬���ӿ⣺bin/Qt5Tianchi.lib(.a)<br/>
����ʱ���ӵ����÷�ʽ�μ���2�㡣<br/>

####4. ֱ��ʹ�õ���Դ�����ļ�<br/>
Tianchi ���ʱ�������ֵ����ļ���ʽ������ֻҪ�Ѷ�Ӧ<br/>
�� .h/.cpp/.ui/.qrc �Լ����ͼƬ�ļ���ֱ�Ӹ��ƻ���
�õ������ļ��м���ʹ��.<br/>
����ʹ�õ�������Դ���Դ����Ҫͬʱ�����������, ��<br/>
����μ� tianchi/tianchi.pri �е���������<br/>

�ļ��б���˵��:
---------------
    bin/                                                ���������ļ���Ŀ¼
        tianchi4qtc.dll                                 Windows����ص� QtCreator / QtDesigner ���ӻ����
                                                        �븴�Ƶ���C:\Qt\Qt5.4.0\Tools\QtCreator\bin\plugins\designer
    help/
        Doxyfile                                        Doxygen �����ĵ��������ļ�
        tianchi.chm                                     �����ļ�

    sample/                                             ��ʾ����Ŀ¼
        sample.pro                                      ��ʾ����Ĺ����ļ�������ֱ�Ӱ�����ؿⷽʽ

    tianchi/
        tianchi.pro                                     ���ɶ�̬���ӿ�
        tianchi_lib.pro                                 ���ɾ�̬���ӿ�
        tianchi.pri                                     ��������ģ��������ļ�

        Common/
            tcCommon.h/.cpp                             һЩ���õĹ�����Ԫ������ Tianchi �� common & utils �����˺ϲ�����
            tcInvoke.h/.cpp                             ӳ���źŲ۵�ִ�ж���
        Component/                                      Qt IDE �Ŀؼ�������Qt���ƣ�����ΪȫСд�ļ���
            QSint/                                      QSint ��Դ���(����), �μ���http://www.oschina.net/p/qsint
            Tianchi/                                    Tianchi ���
                qcustomplot.h/.cpp                      QCustomPlot ͼ��ؼ����μ���http://www.qcustomplot.com/
                tcDateEdit.h/.cpp                       ��������Ϊ�յ�����ѡ����(IDE�ؼ�)
                tcColorWheel.h/.cpp                     ȡɫ�ؼ�(IDE�ؼ�)
            wwWidgets/                                  wwWidgets ��Դ���(����), �μ���http://www.wysota.eu.org/wwwidgets
        Encrypt/
            tcAES.h/.cpp                                AES ����/���ܣ�ʹ�� Crypto++��
            tcRSA.h/.cpp                                RSA ����/���ܣ�ʹ�� Crypto++��
            cryptopp/                                   Crypto++5.6.2 ����/���ܿ�Դ��
        Gui/
            tcAutoCursor.h/.cpp                         ���������ú��Զ��ָ�����
            tcGuiCommon.h/.cpp                          һЩGUI��صĹ�����Ԫ��
            tcImageAdjust.h/.cpp                        ͼƬ�򵥴���(�ữ, ��, �ҶȻ�, �ڰ׻�, ��Ƭ��, ����)
        IO/
            tcExcel.h/.cpp                              ͨ�� OLE ��ʽ���� Microsoft Excel������ Windows ��ʹ�ã�Ҫ���Ѱ�װ Excel��
            tcExcelReader.h/.cpp                        ͨ�� OLE ��ʽ��ȡ Microsoft Excel, WPS��Linux �½�֧��WPS��
            tcIO.h/.cpp                                 Ŀ¼���ļ��Ȳ�������
            tcLog.h/.cpp                                �򵥵��ı���־�������
        Multimedia/
            tcTextToSpeech.h/.cpp                       ����תΪ�������в��ţ����� Windows ��ʹ��
        Network/
            tcDownloader.h/.cpp                         �����ļ���������Ŀǰ��ʵ�� http �ļ�����
            tcFtp.h/.cpp                                Ftp ����
            tcHttp.h/.cpp                               http/https �������첽תΪͬ�����������ȴ��������ڵ�¼ʱ�ȴ�����
            tcUdp.h/.cpp                                UdpЭ��Ľ��շ��������Լ����ͺ͹㲥����
        OS/
            tcAdminAuthorization.h                      ����ϵͳ����ԱȨ�޵��жϺ�����Ȩ��ִ�г���
            tcAdminAuthorization_mac.cpp                ��������Ա��Ȩ��MacOSʵ��
            tcAdminAuthorization_win.cpp                ��������Ա��Ȩ��Windowsʵ��
            tcAdminAuthorization_x11.cpp                ��������Ա��Ȩ��Linux/BSDʵ��
            tcChinese.h/.cpp/.inc                       Windows �º���תƴ������
            tcOS.h/.cpp                                 ����ϵͳ��ع���
            tcRunOnceChecker.h/.cpp                     ����ʵ���жϣ�����Ƿ�ǰ�����ǵ�һ������
            tcSelfRestarter.h/.cpp                      ʵ�ֳ����˳����Զ�����
            tcSystemInfo.h/.cpp                         ���̡��ڴ��ϵͳ��Ϣ
            tcSystemInfo_mac.cpp                        ���̡��ڴ��ϵͳ��Ϣ��MacOSʵ��
            tcSystemInfo_win.cpp                        ���̡��ڴ��ϵͳ��Ϣ��Windowsʵ��
            tcSystemInfo_x11.cpp                        ���̡��ڴ��ϵͳ��Ϣ��Linux/BSDʵ��
            tcWindows.h/.cpp                            Microsoft Windows ϵͳ���ܣ�ֻ����Windows��ʹ��
        QRCode/                                         ��ά��������ģ��
            tcQrencode.h/.cpp                           ��ά�����
            qrencode/                                   ��ά�����Ŀ�Դ��
            tcZxing.h/.cpp                              ��ά�����
            zxing/                                      ��ά�����Ŀ�Դ�� (VC2010���޷����룬������ȥ��)
        Widgets/
            tcPageTurnWidget.h/.cpp                     ��ҳ��ť��
            tcScreenshot.h/.cpp/.ui                     ��������
            tcShadowDialog.h/.cpp/.ui/.qrc              ����Ӱ�Ϳ����ŵ��ޱ߶Ի�����
            images/                                     tcShadowDialog ʹ�õ���ͼƬ
                close.png
            tcStyleToolDialog.h/.cpp/.ui                �ޱ߿򴰿ڼ���Ӱ�����Ź���
            tcViewHeaderSetupDialog.h/.cpp/.ui/.qrc     QTreeWidget ��ͷ���öԻ���
            images/                                     tcViewHeaderSetupDialog ʹ�õ���ͼƬ
                alignBottom.png
                alignCenter.png
                alignLeft.png
                alignRight.png
                alignTop.png
            tcWidget.h/.cpp                             QWidget �����չ

    tianchi4qtc/                                        Qt Designer ���
        tianchi4qtc.pro                                 ��������ļ���
                                                        ע��: ������ Release ģʽ���� !!!
                                                              Windows �±����� VC2010+ �±��� !!!

�ر��л���빱�����Լ�ά����Ա
------------------------------
XChinux / www.qtcn.org ̳��<br/>
cnhemiya / �Ϲ���<br/>
roywillow<br/>
younghz<br/>
��������<br/>
foxgod<br/>
Jonix<br/>
