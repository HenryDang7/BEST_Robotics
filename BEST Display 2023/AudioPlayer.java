import java.util.Scanner;

import java.io.IOException;
import java.io.File;

import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;

class AudioPlayer {
	private static File soundFile = new File("Error.wav");
	private static String initiateSequence = "UETM";
	private static String escapeSequence = "HD";

	public static void main(String[] args) throws IOException {
		Scanner kbInput = new Scanner(System.in);
		String input;

		while (true) {
			input = kbInput.next();

			if (input.equals(initiateSequence)) {
				playSound();

			} else if (input.equals(escapeSequence)) {
				break;

			} else {
				System.out.println("Try Again");
			}
		}

		kbInput.close();
	}

	public static void playSound() {
		try {
			if (soundFile.exists()) {
				AudioInputStream audioInput = AudioSystem.getAudioInputStream(soundFile);
				Clip clip = AudioSystem.getClip();
				clip.open(audioInput);
				clip.start();

			} else {
				System.out.println("Audio File Not Found");
			}

		} catch (Exception e) {
			System.out.println(e);
		}
	}
}