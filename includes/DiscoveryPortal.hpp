#ifndef DISCOVERYPORTAL_HPP
# define DISCOVERYPORTAL_HPP

# include <iostream>
# include <string>

class DiscoveryPortal {
	private:
		DatabaseManager _database;
		
	public:
		DiscoveryPortal(void);
		~DiscoveryPortal(void);
}; 
#endif /* DISCOVERYPORTAL */
