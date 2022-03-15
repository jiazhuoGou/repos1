# 口语
## Unit1
1-5
This video shows us that people are helped by the kindness of others and pass on that kindness to help another person

That is, when I was on the bus, the person in the back didn't swipe the card, so I asked the person in front to help pass it over.

In the experimental class at the university, my roommate taught me to configure some experimental environments for free,
 and I will help other students in the class to do some experiments.

Because people are moved by the kindness of others and they also realize that they have an obligation to help others
they Will take the initiative to help others

1-8
in thoser videos,we see a lot of examples of kindness,
and what impressed me the most was that they were relaying to help others and passing on kindness.
The charm of kindness is to make you feel warm and to rebuild your self-confidence
There is a saying that goes like this,Gifts of roses, hand a fragrance,
Not only do you help others when you are doing good deeds, but you also feel comfortable and increase your own well-being
Moreover, kindness will also be passed on in the crowd, thus affecting everyone, and ultimately increasing social happiness


fif 1 : anxiety green stomachache sweat unfamiliar surroundings blush

	are you ok jake?you are looking a little green. i didn't sleep very well last night.   
	Too excited about startingbasketball camp? No Every time i think about it,my heart starts pounding and i get a stomachache.
	But you're great atbasketball! it's not the basketball that makes me sweat.There's a welcome party tonight and i will have to meet new people.i don't want to go because i hate meeting new people 
          and being in unfamiliar surroundings
	you had social anxiety?But you are great with people.
	So what did you do?
	i don't get it, what good does that do?
	you are right,i will practice relaxing this afternoon and go to the party tonight

## Unit2
### section 2  Giving tree summary
A long time ago, a little boy played with a tree. They all felt happy.

As the little boy grew up, he became estranged from the tree.

When the boy needed money, the tree asked him to pick his fruit and sell it. The boy did so and felt very happy at the same time,but he still didn't come back.

When the boy needed a house, the tree asked him to chop off his branches to build the house. The boy did so, but he didn't come back.

When the boy gets old and wants to sail and rest,The tree asked him to cut down tree chunk to make a boat. He did the same and didn't come back.

Finally, the man met the tree again and said he didn't need anything.He snuggled up under the tree, and then they felt happy again.

The tree always asks for nothing in return and helps him.

### 第四部分section 1，4个问题

### 34页，section3的group discussion
A person's change often requires an opportunity.


# vscode编译cpp文件
## step1(新建文件夹)
	首先新建文件夹，当作你的工作区，这里是./offer
	然后新建一个测试文件，hello.cpp

	#include <iostream>
	#include <vector>
	#include <string>
	using namespace std;
	int main()
	{
		vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

		for (const string& word : msg)
		{
			cout << word << " ";
		}
		cout << endl;
		return 0;
	}
	
## step2(配置json文件)
	点击终端，选择配置默认生成任务，选择g++那一项
	要使得当前界面就是你的新建文件，不然你选择的时候没有那个选项

	// tasks.json
	{
		// https://code.visualstudio.com/docs/editor/tasks
		"version": "2.0.0",
		"tasks": [
			{
				"label": "Build",  // 任务的名字叫Build，注意是大小写区分的，等会在launch中调用这个名字
				"type": "shell",  // 任务执行的是shell命令，也可以是
				"command": "g++", // 命令是g++
				"args": [
					"-Wall",
					"-std=c++17",  //使用c++17标准编译
					"${file}", //当前文件名
					"-o", //对象名，不进行编译优化
					"${fileDirname}\\${fileBasenameNoExtension}.exe",  //当前文件名（去掉扩展名）
				],
			// 所以以上部分，就是在shell中执行（假设文件名为filename.cpp）
			// g++ filename.cpp -o filename.exe
				"group": { 
					"kind": "build",
					"isDefault": true   
					// 任务分组，因为是tasks而不是task，意味着可以连着执行很多任务
					// 在build组的任务们，可以通过在Command Palette(F1) 输入run build task来运行
					// 当然，如果任务分组是test，你就可以用run test task来运行 
				},
				"problemMatcher": [
					"$gcc" // 使用gcc捕获错误
				],
			}
		]
	}

## step3(Ctrl+Shift+B 编译)

## step4(调试)



