package;

import haxe.exceptions.NotImplementedException;

class Main {
	public static final args:Array<String> = Sys.args();

	public static function main() {
		if (args.length >= 1) {
			switch (args[0]) {
				case "run":
					throw new NotImplementedException();
				case "add":
					throw new NotImplementedException();
				case "remove":
					throw new NotImplementedException();
				case "set":
					throw new NotImplementedException();
				default:
					Console.warn("Unknown command. Type \"atsm help\" for info.");
			}
		}
	}
}
