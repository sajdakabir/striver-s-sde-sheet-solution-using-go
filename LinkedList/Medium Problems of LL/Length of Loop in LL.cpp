// problem link:https://practice.geeksforgeeks.org/problems/find-length-of-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-length-of-loop


int countNodesinLoop(struct Node *head)
{
    // Code here
        //   int ans=0;
    Node* s=head;
    Node* f=head;
    
    while(f && f->next){
        s=s->next;
        f=f->next->next;
        if(s==f){
      int ans=1;
            s=s->next;
            while(s!=f){
                s=s->next;
                ans++;
            }
            return ans;
        }
    }
    return 0;
    
}