#pragma once
#include <string>
#include "Graphics.h"
class Map {
private:
	const int width = 200;
	const int height = 150;
	std::wstring map;
public:
	Map() {
		map += L"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
		map += L"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                 RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                                                                                                                                        RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                             RRRRRRRRRRRRRRR                                    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                                                RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                  RRRRRRRRRRRRRRR               RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                  RRRRRRRRRRRRRRR               RR";
		map += L"RR           RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                  RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                  RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW                  RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                                                                                                                                      RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                        RRRRRRRRRRRRRRR               RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                                                      RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                                                      RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                                                      RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                                                      RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                                                      RR";
		map += L"RR                                                          RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR                                                                      RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RR                                                                                                                                                                                                    RR";
		map += L"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
		map += L"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
	}
	void Draw(Graphics& gfx) {
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				switch (map[y * width + x]) {
					case 'R':
						gfx.DrawPixel(x, y, GREY);
						break;
					case'W':
						gfx.DrawPixel(x, y, DARK_CYAN);
						break;
					default:
						gfx.DrawPixel(x, y, GREEN);
				}
			}
		}
	}
	char Get(int x, int y) {
		return map[y * width + x];
	}
};