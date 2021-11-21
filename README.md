# 2022-Winter-Olympic-Mascots-Arduino
本项目以2022北京冬奥会吉祥物冰墩墩为原型，通过舵机、扬声器、RGB灯光等元件，控制冰墩墩的运动，布置滑雪的场景。
值得注意的是，在制作过程中，大量使用了易拉罐、纸箱等可回收材料，是对废物利用的小尝试。
具体实施方案：
  硬件方面
    一块esp8266（mcu1.0版本）；
    两块Arduino nano板（由于Arduino的舵机驱动库无法在esp8266上直接运行，需要通过esp8266控制nano板间接控制舵机运行）；
    五个SG90舵机（四个舵机分别控释冰墩墩的四个关节，最后的一个控制手臂的摆动；
    SD卡读取模块；
    四个8W、0.5Ω扬声器；
    RGB灯、杜邦线、面包板若干；
    易拉罐、废旧纸箱、泡沫板、废旧锡纸若干；
    TS喷漆（白色、银色、黑色）；
    彩色马克笔若干；
  软件方面
    Arduino IDE编程环境；
    TCP通讯程序编写；
  制作过程
    1、程序验证与调试
      主要分为三部分：通讯模块、舵机控制模块、音乐播放模块，其余还包括场景灯具的控制等等；
    2、建模与动态仿真
      首先通过3DMAX建立曲面模型，通过SolidWorks进行装配仿真；
    3、3D打印模型
      将零部件依次打印（受限于3D打印精度，需要对打印出来的零件进行手工处理）；
    4、易拉罐外壳加工
      在3D打印模型的基础上，由于易拉罐表面硬度较好，可以剪裁成片状进行粘贴，将大块的3D打印部件抽出，仅保留必要的支撑部分，降低整体重量；
    5、表面覆盖锡纸定型
      由于易拉罐是片状粘贴而成，不易上色且不美观，通过废旧锡纸，利用其可塑性强的特点，对表面进行包裹，进一步固定形状方便上色；
    6、喷涂上色
      主要使用丙烯涂料以及彩色马克笔，根据模型图进行上色；
    7、场景搭建
      主要根据冬奥会场景，充分废物利用，用泡沫板做支撑，残余的泡沫作为雪粉，利用废旧礼盒灯珠以及自己搭建的RGB灯，在废旧纸盒内营造出一片热闹的冬奥会滑雪场景，其中观众利用易拉罐的拉环       进行制作；
