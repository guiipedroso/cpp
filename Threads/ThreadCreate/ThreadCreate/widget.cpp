#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

/*
void
counting(int count)
  {
    for(int i{0}; i < count; i++)
      {
        qDebug() << "counting: " << i << "thread: " << QThread::currentThread();
      }
  }
*/




Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    qDebug() << "Main Thread" << QThread::currentThread();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::counting()
{
    for(int i{0}; i < 10000; i++)
    {
    qDebug() << "Counting method called : " << i <<
                "thread : " << QThread::currentThread() << "id : " <<
                QThread::currentThreadId() <<
                "Thread is running :" << thread->isRunning();
    }
}

void Widget::on_pushButton_clicked()
{
    /*for(int i{0}; 1000000; i++)
      {
      qDebug() << "counting in ui thread...";
      qDebug() << "counting: " << i << "thread: " << QThread::currentThread() << "id : " << QThread::currentThreadId();
      }
    */

    /*
    1. Global function
    thread = QThread::create(counting,10000);
    */

    /*
    2. Named lambda function

    auto countlambda = [](int count){
        for(int i{0}; i < count ; i++)
          {
          qDebug() << "countlambda couting...";
          qDebug() << "Counting : " << i <<
                      "thread : " << QThread::currentThread() << "id :: " << QThread::currentThreadId();
          }
    };

    thread = QThread::create(countlambda,10000);
    */

    /*
    3. Non named lambdda function


    thread = QThread::create([](){
        for(int i{0}; i < 10000; i++)
          {
          qDebug() << "Counting : " << i <<
                      "thread : " << QThread::currentThread() << "id :: " << QThread::currentThreadId();
          }
    });
    */


    /*
    4. Member function,
    */

    thread = QThread::create([=](){
        counting();

    });

    connect(thread, &QThread::started,[]()
      {
       qDebug() << "Thread started";
      });

    connect(thread, &QThread::finished,[]()
      {
       qDebug() << "Thread finished";
      });

    connect(thread, &QThread::finished, thread, &QThread::deleteLater);



    thread->start(); //run application

    qDebug() << "Clicked on the started";
}

