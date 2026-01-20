#ifndef _BRAIN_HPP
#define _BRAIN_HPP

#include <iostream>

class Brain
{
    public:
    Brain();
    Brain(std::string ideas[100]);
    Brain(const Brain& b);
    ~Brain();
    
    Brain &operator=(const Brain& b);
    
    void        setIdeas(std::string ideas[100]);
    std::string *getIdeas(void);


    private:
    std::string _ideas[100];
};

#endif
