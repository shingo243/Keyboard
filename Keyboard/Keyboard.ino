//
// 常套句キーボード
//  for Arduino Pro Mocro
#include <Keyboard.h>

#define key1 7
#define key2 8
#define key3 9
#define key4 10

char message1[] = "itumoosewaninatteorimasu. \n";	// いつもお世話になっております。
char message2[] = "otukaresamadesu. \n";		// おつかれさまです。
char message3[] = "ijou,yorosikuonegaisimasu. \n";	// 以上、よろしくお願いします。
//char message4[] = " \n";				// 

//
//　初期設定
//
void setup() {
	pinMode( key1, INPUT_PULLUP );
	pinMode( key2, INPUT_PULLUP );
	pinMode( key3, INPUT_PULLUP );
	pinMode( key4, INPUT_PULLUP );
	Keyboard.begin();
}

//
//　メイン
//
void loop() {
	if( digitalRead( key1 ) == LOW){
		for ( int i = 0; i < sizeof( message1 ) - 1; i++ ) {
			Keyboard.print( message1[i] );
		}
		Keyboard.println();
		delay( 200 );
	}
	if( digitalRead( key2 ) == LOW ){
		for ( int i = 0; i < sizeof( message2 ) - 1; i++ ) {
			Keyboard.print( message2[i] );
		}
		Keyboard.println();
		delay( 200 );
	}
	if( digitalRead( key3 ) == LOW ){
		for ( int i = 0; i < sizeof( message3 ) - 1; i++ ) {
			Keyboard.print( message3[i] );
		}
		Keyboard.println();
		delay( 200 );
	}
/*	if( digitalRead( key4 ) == LOW ){
		for ( int i = 0; i < sizeof( message4 ) - 1; i++ ) {
			Keyboard.print( message4[i] );
		}
		Keyboard.println();
		delay( 200 );
	}*/
}
