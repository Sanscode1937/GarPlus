package;
import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.animation.FlxAnimationController;
import flixel.FlxSprite;
import flixel.FlxObject;
import openfl.display.BlendMode;

using StringTools;

class PlayState extends FlxState
{
	var curSelected:Int = 0;
	var debugTxt:FlxText;
	var paused:Bool = false;

	override public function create()
	{

		var a = FlxGridOverlay.create(10, 10);
		a.scrollFactor.set(.5, .5);
		add(a);
		debugTxt = new FlxText(900, 20, 0, "", 20);
		debugTxt.color = 0xFF0000FF;
		add(debugTxt);
		var basedX:Int = 100;
		var basedY:Int = 134;			
		
            var prototypeTest:FlxSprite;
            prototypeTest = new FlxSprite(100,134);
            prototypeTest.frames = TextureAtlas.construct('assets/images/cutsceneStuff/tightBars');
            prototypeTest.animation.add("tightBars", numArr(1,324), 30, false);
            prototypeTest.antialiasing = true;
			add(prototypeTest);
			prototypeTest.animation.play('tightBars');
			
			prototypeTest.animation.callback = function(idle, frameNumber:Int, frameIndex:Int)
				{
					if (FlxG.keys.justPressed.LEFT)
						{
							frameNumber = -1;
						}        
					if (FlxG.keys.justPressed.RIGHT)
						{
							frameNumber = 1;
						}    
				}  
					if (FlxG.mouse.wheel != 0)
						{
							// Mouse wheel logic goes here, for example zooming in / out: so >:))))))))))))))))
							FlxG.camera.zoom += (FlxG.mouse.wheel / 10);
						}	

	}

	public function numArr(min,max):Array<Int>
	{	
		var a = [];
		var l = max - min;
		var p = min;
		for (i in 0...l){
			a.push(p);
			p++;
		}
		trace(a);
		return a;
	}
	
}