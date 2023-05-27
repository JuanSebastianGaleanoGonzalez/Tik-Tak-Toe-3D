#ifndef __TiktaktoePlayerBase__h__
#define __TiktaktoePlayerBase__h__

class TikTakToePlayerBase{
    public:
        TikTakToePlayerBase( );
        virtual ~TikTakToePlayerBase( ) = default;
        
        virtual void configure(unsigned int size, unsigned char symbol);
        virtual void play(unsigned int& x, unsigned int& y, unsigned int& z);
        virtual void report( const unsigned char& c );

    protected:
        unsigned int size;
        unsigned char symbol;
}; 

#endif //  __TiktaktoePlayerBase__h__