// From: db_src/pir-mraa.cpp

#include "Log.h"

int main(int argc, char* argv[]) {

   // Cmd line parsing for logfile
   std::string logfile;
   logfile = "pir_sersor.log";
        if (argc > 2) {
      cerr << "Usage: " << argv[0] << " [log_filename=pir_sensor.log]" << endl;
      return(-1);
   }
        else if (argc == 2) {
              logfile = argv[1];
   }
   // Init LOG with logfile in runtime
   LOG_OBJ.setFilename(logfile);
   LOG(Info) << "Log file: " << logfile.c_str() << ENDL;

   LOG(Info) << "Calibrating sensor: " << calibrationTime << " seconds ";
   LOG(Normal) << " done" << ENDL;
}
