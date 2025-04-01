#include<iostream>
#include<list>

using namespace std;


class YouTubeChannel
{
    private:
    int dislikes = 0;

    public:
    int likes = 0;
    string name = "\0";
    int subsriberCount = 0;

    void setChannelData(string channelName, int dislikes, int likes, int subscribers)
    {
        this->name = channelName;
        this->dislikes = dislikes;
        this->likes = likes;
        this->subsriberCount = subscribers;
    }

    void getChannelData(void)
    {
        cout << "-------------------------------\n";
        cout << "Channel Name: " << name << endl;
        cout << "Total Likes: " << likes << endl;
        cout << "Total Subsriber Count: " << subsriberCount << endl;
        
    }

    void Subscribe()
    {
        subsriberCount++;
    }
    void UnSubscribe()
    {
        if (subsriberCount <= 0)
        {
            subsriberCount = 0;
        }
        
        subsriberCount--;
    }
    
};



int main()
{
    YouTubeChannel myChannel_instance;  // class instance
    YouTubeChannel channel_2_instance;

    cout << "Channel 1 Information" << endl;
    myChannel_instance.setChannelData("void Embedded",0,100,32); // set the channel
    myChannel_instance.getChannelData(); // get the channel information
    myChannel_instance.UnSubscribe();    // unsubsriber channel 1
    myChannel_instance.getChannelData();  // ge the channel information

    cout << "Channel 2 information" << endl;
    channel_2_instance.setChannelData("ShrimanYogi",0,100,1); // set the chn
    channel_2_instance.getChannelData();
    channel_2_instance.Subscribe();
    channel_2_instance.getChannelData();
    return 0;
}