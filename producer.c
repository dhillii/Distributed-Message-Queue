// C Program for Message Queue producer
#include <stdio.h> 
#include <sys/ipc.h> 
#include <sys/msg.h> 

  
// structure for message queue 
struct msg_buffer { 
    long msg_type; 
    char msg_text[100]; 
} message; 
  
int main() 
{ 
    key_t key; 
    int msgid; 
  
    // ftok generates a unique key 
    key = ftok("progfile", 65); 
  
    // msgget creates a message queue 
    // and returns identifier 
    msg_id = msgget(key, 0666 | IPC_CREAT); 
    message.msg_type = 1; 
  
    printf("Write Message > "); 
    gets(message.msg_text); 
  
    // Send message 
    msgsnd(msg_id, &message, sizeof(message), 0); 
  
    // display the message 
    printf("Message sent is > %s \n", message.msg_text); 
  
    return 0; 
} 