# 🥓 Bacon Cipher Translator (CSE240)

**C | File I/O | Encoding Algorithms | Custom Cipher | CLI Utility**

This C program implements a Bacon Cipher Translator, capable of converting English text into a Baconian code and decoding it back. The Bacon Cipher is a method of steganography developed by Francis Bacon that uses sequences of 'a' and 'b' (or in this case, `x` and `o`) to represent letters.

---

## 🔧 Features

### 🔤 Encode (English ➝ Bacon Code)
- Encodes each character into a unique 5-letter sequence using `x` and `o`
- Tokens are separated by `|`, with sentence delimiters as `|/|`
- Example: `"abc"` ➝ `xxxxx|xxxxo|xxxox|/|`

### 🔁 Decode (Bacon Code ➝ English)
- Reconstructs original English text from Bacon cipher input
- Uses `|` as token separator, `|/|` as word boundary
- Unrecognized sequences return `%` or `#` as fallback

### 🧠 Supported Characters
- All English letters: `A` to `Z` (case-insensitive)
- Special symbol: `#` ➝ `!!!!!`
- Others are replaced with `%` in decoding

---

## 📁 File Descriptions

| File                  | Description                                  |
|------------------------|----------------------------------------------|
| `son_hongju_Assn2.c`   | Main program logic and file I/O handling     |
| `son_baconCode.c`      | Bacon cipher encoding/decoding logic         |
| `son_baconCode.h`      | Function declarations                        |
| `Makefile`             | Optional build file (if present)             |
| `metadata.yml`         | Assignment submission metadata (can ignore)  |

---

## 🖥️ Example Usage

### 🔨 Compile
```bash
gcc son_hongju_Assn2.c son_baconCode.c -o bacon

📤 Encode English to Bacon

./bacon -b input.txt output.bacon

📥 Decode Bacon to English

./bacon -e output.bacon decoded.txt

If arguments are missing or incorrect, the program will print:

Error -- usage: ./assn2exe <-b|-e> <input file> <output file>

🧪 Sample I/O
📄 Input File (input.txt)

Hello World

📁 Encoded Output (output.bacon)

xxooo|xxoxx|xoxoo|xoxoo|xooox|/|oxoox|xooox|oxxxo|xoxoo|xxxoo|/|

📄 Decoded Output (decoded.txt)

HELLO WORLD

🧠 Concepts Demonstrated

    ✅ File handling with fopen, fgets, fclose, fprintf

    ✅ Manual dynamic memory management using malloc

    ✅ String parsing using strtok, strcmp, strcat

    ✅ Custom cipher construction via switch statements

    ✅ Defensive programming with CLI argument validation

📌 How Bacon Cipher Works

Each letter maps to a unique 5-letter combination of x and o:

A → xxxxx
B → xxxxo
C → xxxox
D → xxxoo
...
Z → ooxxo

Delimiters:

    Between characters: |

    End of word/sentence: |/|

    Special symbol #: !!!!!

🏗️ Suggested Folder Structure

bacon-cipher-translator-cse240/
├── son_hongju_Assn2.c        # Main driver
├── son_baconCode.c           # Cipher logic
├── son_baconCode.h           # Header file
├── Makefile                  # (optional)
├── metadata.yml              # Submission record
└── README.md                 # This file

👨‍💻 Author

Hongju Son
📧 hson17@asu.edu
🎓 Arizona State University – CSE240
🔗 LinkedIn
📄 License

This project is licensed for educational and demonstration purposes. Attribution appreciated if reused.
