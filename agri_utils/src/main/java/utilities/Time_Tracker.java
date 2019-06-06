package utilities;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.Date;

public class Time_Tracker {
	
	public static LocalDate getInputDate(String date) {
		DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
		return LocalDate.parse(date, formatter);
	}

	public static long dayCount(LocalDate start, LocalDate end) {
		long nums = 0;
		try {
			if (end.isAfter(start)) {
				nums = ChronoUnit.DAYS.between(start,end);
			}
			else
			{
				nums = ChronoUnit.DAYS.between(end, start);
			}
				
		} catch (Exception e) {
			System.out.println(e.toString());
		}
		return nums;
	}	

	public static long weekCount(LocalDate start, LocalDate end) {
		return Math.floorDiv(dayCount(start, end), 7);
	}
	
	public static long monthCount(LocalDate start, LocalDate end) {
		long nums = 0;
		try {
			if (end.isAfter(start)) {
				nums = ChronoUnit.MONTHS.between(start,end);
			}
			else
			{
				nums = ChronoUnit.MONTHS.between(end, start);
			}
				
		} catch (Exception e) {
			System.out.println(e.toString());
		}
		return nums;
	}
	

}
