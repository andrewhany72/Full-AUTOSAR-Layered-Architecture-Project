A Full Layered AUTOSAR Project that toggle a led using a button as input for the TM4C123GH6PM Micro-controller.

Project requirements:

The button is considered pressed if it reads high for 60ms.
The button is considered released if it reads low for 60ms.
Led output needs to be refreshed every 40ms.
The project is built as follow:

The MCAL contains the DIO, GPT and Port drivers.
The ECUAL contains the Led and Button drivers(Led is connected to PF1 and button is connected to PF4).
The service layer contains the scheduler.
The application layer contains the system logic.
/********** the "port and dio drivers test cases" file contains the tests that is made on the DIO and Port drivers to check the validity of the implementation **********/
