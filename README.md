# TuringMachine_Qt

a TuringMachine_visualizer on Qt

## TODO list: 
- [x] 进一步美化界面(考虑加入图灵画像)
- [ ] 考虑支持多带图灵机(由于画图能力有限,这个最后再考虑)
- [ ] 自动化模拟功能,即一键动画演示(可能会加入速度参数以调节)
- [ ] 对文件的读写采用更加灵活的方式,调用系统自带的api来完成文件的手动导入
- [ ] 仍然存在编码问题(存在困惑,目前已经采用UTF-8格式,但还是无法在Windows上直接编译,需要再改成Unicode格式),缺乏Windows下的测试,发现这事分电脑,有的能行,有的就不行.
## v1.0.2(2019/05/05)
- 美化了UI界面
## v1.0.1(2019/05/03)
**修复了Windows系统不能编译的Bug**
- 自己导入了官方的dirent.h库,更名为myDirent.h,减少了Windows下缺少此库的问题
## v1.0(2019/05/03)
**基于Qt实现了图灵机基本功能(虽然很简陋)**
- 文件输入,需要将输入文件放在DeBug文件夹下,结尾必须以".txt"形式,否则会被程序略过,文件格式见log.txt或log2.txt
- 模拟处理,根据教材知识进行模拟判断是否正常退出(退出时状态是否是终止状态(之一)).
- 字符串处理可视化,采用QPaint来绘制字符串,目前仅仅是粗糙实现,后续可能继续优化改善
