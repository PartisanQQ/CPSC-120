//Anthony Nguyen
//David McClaren
//HW 10
//10 November 2016

#include <fstream>
#include <string>
using namespace std;

string decode_message(string);

int main()
{
	//variables
	string encoded_message = "";
	ifstream in_file;
	ofstream out_file;

	//retrieve encoded message
	in_file.open("encoded.txt");
	getline(in_file, encoded_message);
	

	//decode and store message
	out_file.open("decoded.txt");
	out_file << decode_message(encoded_message);

	return 0;
}

string decode_message(string in_message)
{
	string dec_msg = "";
	string enc_msg = in_message;
	int msg_len = in_message.length();

	for (int i = 0; i < msg_len; i++)
	{
		if (enc_msg[i] >= 'A' && enc_msg[i] <= 'M')
		{
			dec_msg += enc_msg[i] + 13;
		}
		else if (enc_msg[i] >= 'N' && enc_msg[i] <= 'Z')
		{
			dec_msg += enc_msg[i] - 13;
		}
		else if (enc_msg[i] >= 'a' && enc_msg[i] <= 'm')
		{
			dec_msg += enc_msg[i] + 13;
		}
		else
		{
			dec_msg += enc_msg[i] - 13;
		}
	}
	return dec_msg;
}