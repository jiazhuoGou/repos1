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

1. the boy represent childrens and the tree symbolizes parents
2. the boy keep taking from the tree, while the tree kept giving.The boy left every time he asked from it with new needs.

### 第四部分section 1，4个问题

### 34页，section3的group discussion
First of all, what I value most is whether a person is positive and optimistic，
Of course, everyone has times when they feel down, but it should come out in time, not indulge in it
So I also prefer to make friends with people who like sports, their living conditions are better and they can improve each other

### 38页， 2 1
That is not actively involved in the team,still alone

I've always been an optimist，One thing is definitely not going well all the time.
So I'm well prepared to meet these challenges.
I think that's the meaning of life
Which is to constantly challenge yourself and actively face the future.
Results are less important than your growth.
Finally, let me share with you
Romain Rolland said There is only one heroism in the world: to see the world as it is and to love it.Isn't the way to climb up more exciting than standing at the top?

I want to work with people who are proactive,
Because these people are more energetic
So we can make progress with each other

## Unit3
### p64 section3 group discussion
First of all,I agree with this view. this video is a clip from a movie called The Terminal.
The film is about the male lead who has to be stranded at the airport because of a coup in his country.
During this period, he discovered all kinds of people who passed by here every day and their respective joys and sorrows in life, and found that it was full of many surprising and interesting stories.
At the same time, he encountered everything in the United States at this airport, and also encountered the happiness that belongs to him.

Marx said that things are rising or developing in a spiral.
I don't think what's happening now is indicative of what's to come.
We must  look upon the problems from the perspective of development.
human effort is the decisive factor,How you want things to be you have to make changes and practice.
What will happen in the future we cannot predict, but we can change what happens now.
Like the man in the video, although stranded at the airport, he encountered other meaningful things. He didn't expect it in advance, and the experience wasn't bad
Especially now as graduate students,we Face a lot of pressure to write essays,But the paper can't be finished at once.
We need to constantly do experiments, observe and record data, and finally summarize the experimental results.
Finally, I would like to share a word with you
Never put off till tomorrow what you can do today.

### p65 section2 group discussion
1. Keep a good mood: a good mood is the first step and the foundation of a happy life. When it's sunny, you should tell yourself: what a nice day; When it rains, you should say: what a beautiful rain scene. When you can have a good mood for all things in life, happiness is not far from you.
2. Have a positive attitude: there will always be some difficulties in life, but we should face them positively and find ways to solve them. Retreat will only make more and more difficulties. How can you feel happy when many difficulties are on you? At the same time, the process of solving difficulties is also the process of obtaining happiness.

## Unit5
### p111，section 1

### p.113，section1 2
I think it's a powerful computer for example, sometimes I will carry out mathematical modeling, run a lot of simulation programs, 
and do some machine learning.I can also play games and watch videos during my usual rest.
If I have a lot of money, I will pay the tuition first.Then buy some gifts for your parents, and the other money will be used as the living expenses of your postgraduate study.

## Unit5
### section 1 143 2 2
The most important thing in education is to teach us how to apply this knowledge. The fundamental purpose of learning knowledge is to change yourself and change the world. Applying what you have learned is the most important thing.Because we will always leave the campus and enter the society one day, we need to use the knowledge we have learned flexibly to solve problems and make our lives happier. Of course, if you are very capable, you can lead the trend and change the world.


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
	${workspaceFolder}\\*.cpp

## step3(Ctrl+Shift+B 编译)

## step4(调试)

# 工程伦理
## 作业2
	A.
	该事故是因为沿线铁路受到雷击影响LKD2-T1型列控中心设备采集驱动单元采集电路电源回路中的保险管F2熔断。但是在熔断前温州南站列控中心管辖区域内轨道无车占用，但是实际情况是后续时段实际有车占用，这样产生了错误的信号，该区间信号机错误升级保持绿灯状态。最后导致列车发生追尾事故。可见这次事故首先是因为天气原因对铁路设施造成影响。其次是技术原因，设备的预防机制没有处理到位，没有纠正过来。最后是人为影响，检修人员安全意识不到位，管理调度发生混乱。这次是对与实际情况下的测试也没到位，导致异常状况发生时无法正确处理。针对于计算机相关的风险源，最重要的就是要做好在极端或者复杂环境下的测试工作。风险的发生就在于个别情况程序员没有考虑到位，或者在执行命令的时候还是太机械化。

	B.从哪些方面入手可以防范工程风险的发生？
	1.首先是从工程立项开始，有没有进行完整细致的方案可行性评估。对于项目的开发背	景以及项目在开发生产实施过程中会对环境或者人类带来哪些潜在危险。
	2.其次是在开发过程中，要对某个具体使用场景进行细致的研究评判，对于可能发生结果要一一对应解决，对于兜底问题要由全面可行的解决方案来处理。在每一步开发过程中要考虑到这一步对下一步会产生哪些影响，思考有没有更简单安全的方式来开发。
	3.另外在测试环节也要注意，上文提到，测试除了正常单元测试之外。还要对工程使用场景中的特殊情况进行认真测试，尽可能多的模拟出特殊场景，收集相应数据进行修正。

	C.在防范工程风险发生中存在哪些伦理问题？
	1.工程的技术伦理问题
	2.工程的利益伦理问题
	3.工程的责任伦理问题
	4.工程的环境伦理问题

	D.包括工程师在内的工程共同体有哪些伦理责任？
	工程师个人伦理责任：工程师作为专业人员，具有一般人不具有的专门的工程知识
	工程共同体伦理责任：现代工程在本质上是一项集体活动，当工程风险发生时，往往不能把全部责任归结于某一个人，而需要工程共同体共同承担
	1.职业伦理责任：工程共同体作为工程职业的参与者必须要有职业伦理责任，面对职业做到尽职尽责、，工作中服从安排，技术上要追求提升。
	2.环境伦理责任：作为人类我们应该保护自然、爱护自然。其次，环境风险同样会对我们的工程造成潜在危害，在工程项目中不能忽略环境带来的影响。
	3.社会伦理责任：每个人都是社会关系中的一员。在从事工程职业中，应该遵守社会道德，保有正确的道德和价值观，不能因个人利益损害社会的利益。    

## 通论大作业
	A. 首先罗伯特·莫里斯的做法肯定是错误的。
	1.义务论道德完全先天地存在于人的理性之中。只有因基于道德的义务感而做出的行为，方存在道德价值。因心地善良而做出的义举，或是因义务而做出的德行（譬如军人因救灾而牺牲），都不能算作真正有德的行为。在这个案例中莫里斯根本就没有做什么善事，他也没有感受到自己的道德义务，它做此事的动机也是不善良。
	2.功利主义又被称为目的论，它是把功利奉为道德终极标准，是把每个人的利益总量奉为道德终极标准的流派。它提倡追求最大幸福，注重实际功用和效果，反对惟言功利和空谈性命的义理之学。在本案中，莫里斯的目的可能并不是直接为了危害互联网，他可能是想通过传播蠕虫病毒的方式来满足的自己的虚荣感，对于他而言他可能觉得自己实现了自我价值，引起了如此巨大的变化，但就整个社会的幸福感而言，明显对互联网世界造成了巨大的损失，整个社会都发生了影响。
	3.契约论的基本论点是把国家的产生说成是人们相互之间或人民同统治者之间相互订立契约的结果，即国家是共同协议的产物。契约论早在古希腊时期就在西方开始流行，直至后来的社会契约论，美国更是在此基础上建的国。社会上的每个人共同签署一份契约来规范自己的行为，这既是法律。莫里斯的在互联网上传播蠕虫病毒的行为明显违反法律，给互联网带了很大的冲击，严重影响人们的生活生产，严重违背了社会契约既法律，所以他的行为也是错误的。

	B.有些黑客认为之所以侵入计算机系统以证明自己的专业能力，你觉得这种行为是否合理？在你看来，黑客本身是道德的，还是不道德的？
	1.我认为这种行为并不合理。因为黑客侵入计算机本质上还是在满足自己的虚荣感，实际上是通过破坏计算机设施的方式来炫耀自己，引起人们注意。当然有些黑客他可能是带有测试的心态去侵入其他计算机，他是想通过这种方式来增强计算机系统的安全性。对于第一种纯炫技的黑客来说，这种是明显违法的，会给互联网，计算机带来巨大的危险。如果这些人想要实现自我价值，可以去研究计算机的一些前沿方向。对于第二种黑客，他们可能是起一种公益心态，虽然这种行为有些正确，但应该只局限于某个公司的产品，然后这些黑客跟这个公司直接对抗，不要影响到其他系统网络。
	2.我认为黑客本身是不道德的，测试的方法多种多样，这种入侵的行为可以在其公司授权后在做，而且出事的时候应该积极回复，帮助解决问题，再进一步提高计算机系统安全体系结构。

	C.你觉得黑客应当受到惩罚么？
	对于恶意破坏互联网基础设施或者计算机系统的黑客应该予以惩罚。对于出发点是增强计算机系统安全的黑客应该在取得其入侵的公司谅解后，依照公司的决定，再决定是否处罚。

	D.应当如何使黑客行为有利于计算机技术的发展？
	最主要是让黑客的动机是好的。在对计算机系统进行入侵后，应该及时发声，善意提醒该系统暴露出的安全问题。引导黑客从非法组织走向合法领域，为计算机互联网安全领域做出贡献。

	E.你关于黑客问题的其他看法。
	黑客在客观层面会对计算机安全领域做出贡献。黑客技术对网络世界的作用取决于使用它的人及其动机。在法律法规规定的范围内，我们可以利用黑客技术进行一些对计算机安全更加有益的事情，来弥补现有软件的安全防护不足之处。如对信息系统进行有效的监管，规范网络渗透技术的研究和应用。
