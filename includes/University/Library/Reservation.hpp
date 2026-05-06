#ifndef RESERVATION_HPP
# define RESERVATION_HPP

# include <iostream>
# include <string>

enum ReservationType {
	BOOK_RESERVATION,
	TABLE_RESERVATION
}

enum	ReservationStatus {
	ACTIVE_RESERVATION,
	CANCELLED_RESERVATION,
	FINISHED_RESERVATION
}

class Reservation {
	private:
		// The ids to identify

		unsigned long long int	_id;
		unsigned long long int _userId;
		unsigned long long int	_resorceId;

		// To identify the type of the object

		ReservationType	_type;
		ReservationStatus	_status;

		// start and final dates

		std::string	_startDate;
		std::string	_endDate;

		// constructors I want to avoid, copy constructors and the operator=

		Reservation(void);
		Reservation(const Reservation &other);
		Reservation& operator=(const Reservation &other);
	public:
		// constructors and destructors

		Reservation(unsigned long long int id, unsigned long long int userId, unsigned long long int resourceId, ReservationType type, ReservationStatus status);
		~Reservation(void);

		// getters

		unsigned long long int	getId(void) const;
		unsigned long long int	getUserId(void) const;
		unsigned long long int	getResourceId(void) const;
		ReservationType	getReservationType(void) const;
		ReservationStatus getReservationStatus(void) const;
		std::string	getStartDate(void) const;
		std::string	getEndDate(void) const;
		
		// setters

		void	setId(unsigned long long int id);
		void	setUserId(unsigned long long int userId);
		void	setResourceId(unsigned long long int resorceId);
		void	setReservationType(ReservationType reservationType);
		void	setReservationStatus(ReservationStatus reservationStatus);
		void	setStartDate(std::string startDate);
		void	setEndDate(std::string endDate);
};

#endif /* RESERVATION_HPP */
