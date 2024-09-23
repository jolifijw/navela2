#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	//Студенческая жизнь кипела. Экзамены на носу, а ты сидишь в своей маленькой комнатушке, заваленной книгами и обещаниями себе «учиться завтра». Внезапно в окно стучит капля дождя, потом еще одна, и вот уже стена ливня барабанит по стеклу, будто крича: «Просыпайся, ты опоздаешь!». 
	cout << "Student life was in full swing. Exams are coming up, and you re sitting in your little room, littered with books and promises to yourself to study tomorrow. Suddenly, a drop of rain knocks on the window, then another, and now a wall of rain is drumming on the glass, as if shouting: Wake up, you ll be late!";
	//Ты хватаешь учебник и, перепрыгивая через разбросанные вещи, спешишь на лекцию. Но в коридоре тебя останавливает странная атмосфера:  студенты шепчутся,  их  лица  бледные  и  испуганные.  Что  происходит?
	cout << "You grab your textbook and, jumping over the scattered things, rush to the lecture. But in the hallway, a strange atmosphere stops you: students are whispering, their faces are pale and scared. What's happening?";
	//Выбери, что ты делаешь:1. Продолжаешь  идти  на  лекцию.2.Спрашиваешь  у  студентов, что  произошло.
    cout << "Choose what you do:\n1. You keep going to the lecture.\n2. You ask the students what happened.\n";
	cin >> a;
	if (a == 1)
	{
		//Продолжаешь  идти  на  лекцию
		cout << "You keep going to the lecture";
		//Ты  приходишь  в  аудиторию  и  видишь,  что  там  все  в  полном  порядке.  Преподаватель  уже  рассказывает  лекцию,  но  ты  замечаешь,  что  его  глаза  красные  и  блестящие,  а  голос  звучит  как  шепот.
		cout << "You come to the auditorium and see that everything is in perfect order. The teacher is already giving a lecture, but you notice that his eyes are red and shiny, and his voice sounds like a whisper.";
		//Выбери, что ты делаешь:1.Спрашиваешь  у  преподавателя, что  с  ним.2.Просишь  сесть  подальше  от  него.
		cout << "Choose what you do:\n1. You ask the teacher what's wrong with him.\n2. You ask to sit away from him.\n";
		cin >> b;
		if (b == 1)
		{
			//Плохой  конец:Ты  спрашиваешь  у  преподавателя, что  с  ним, и  он  отвечает  жутким  шепотом : Ты  уже  чувствуешь  ее?  Преподаватель  начинает  преследовать  тебя, пытаясь  затащить  в  заточение, как  и  девушку.
			cout << "A bad ending:\nYou ask the teacher what's wrong with him and he answers in a creepy whisper: Can you feel her already? The teacher starts chasing you, trying to drag you into prison, just like the girl.";
			return 0;
		}
		else;
		{
			//2.  Просишь  сесть  подальше  от  него.
			cout << "You ask to sit away from him:";
			//Хороший  конец:Ты  просишь  сесть  подальше  от  преподавателя.  По  иронии  судьбы,  ты  случайно  сдаешь  экзамен  с  "отлично".  В  последствии  тебя  назначают  помощником  преподавателя,  и  ты  раскрываешь  тайну  проклятого  экзамена.
			cout << "A good ending:You're asking me to sit away from the teacher. Ironically, you accidentally pass the exam with an A. Subsequently, you are appointed a teaching assistant, and you reveal the secret of the cursed exam.";
			return 0;
		}
	}
	else;
	{
		//Спрашиваешь  у  студентов,  что  произошло.
		cout << "You ask the students what happened.";
		cout << "Students whisper that a girl has disappeared in this classroom. She came to the exam, but then disappeared, and no one saw her anymore. They say she got an unsatisfactory grade on the exam and ended up trapped in this classroom.";
		//Выбери, что ты делаешь :1.  Идешь  на  экзамен.2.  Уходишь  из  университета.
		cout << "Choose what you do:\n1. You are going to the exam.\n2.You leave the university.\n";
		cin >> c;
		if (c == 1)
		{
			//Плохой  конец:· Ты  спрашиваешь  студентов  и  идешь  на  экзамен.  В  момент  экзамена  ты  чувствуешь  тяжелое  присутствие,  а  тебя  переполняет  желание  сдать  экзамен  любой  ценой.  Ты  сдаешь  экзамен  на  "отлично",  но  чувствуешь,  что  что-то  в  тебе  изменилось.  
		cout << "A bad ending:· You ask the students and go to the exam. At the moment of the exam, you feel a heavy presence, and you are overwhelmed by the desire to pass the exam at any cost. You pass the exam with an excellent mark, but you feel that something has changed in you.";
		return 0;
		}
		else;
		{
			//Хороший  конец:Ты  спрашиваешь  студентов  и  уходишь  из  университета.  Ты  делишься  историей  с  друзьями,  и  вместе  вы  начинаете  разыскивать  девушку.  В  конце  концов  вы  ее  находите  и  спасаете.
			cout << "A good ending : You ask the students and leave the university.You share the story with your friends, and together you start looking for a girl.Eventually you find her and save her.";
			return 0;
		}
	}






















































	}