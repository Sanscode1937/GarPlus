package;

import flixel.group.FlxSpriteGroup.FlxTypedSpriteGroup;
import Controls.Control;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.addons.transition.FlxTransitionableState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.input.keyboard.FlxKey;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.effects.FlxFlicker;
import flixel.FlxCamera;

using StringTools;

class UnownSubState extends MusicBeatSubstate
{
	var selectedWord:String;
	var realWord:String = '';
	var position:Int = 0;
	var words:Array<String> = [
		'DODGE',
	];

    var Playst = new PlayState(); 

	var endsong:Array<String> = [
		'ENDINGTHISSONGCUZSUFFER',
	];
    
	var lines:FlxTypedGroup<FlxSprite>;
	var unowns:FlxTypedSpriteGroup<FlxSprite>;
	public var win:Void->Void = null;
	public var lose:Void->Void = null;
	var timer:Int = 10;
	var timerTxt:FlxText;
	public function new(theTimer:Int = 15, word:String = '')
	{

        if (PlayState.SONG.song.toLowerCase() == 'DICK PAYNE')
            {
                trace("You cheat like a bitch")
            }

		if (PlayState.SONG.song.toLowerCase() == 'release')
            {
                words = endsong;
                Playst.endSong();
            }
			
		}
	}
}
