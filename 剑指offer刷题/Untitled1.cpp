// �Ʒ֣��˴�����ȫ��������ʵ������bfs����dfs�Ӽ�֦���͸��Ӷȣ�ͨ������Ȩ��ֵ������AI���̶ܳ��Լ����ط��
    for (int row = 0; row < kBoardSizeNum; row++)
        for (int col = 0; col < kBoardSizeNum; col++)
        {
            // �հ׵����
            if (row > 0 && col > 0 &&gameMapVec[row][col] == 0)
            {
                // ������Χ�˸�����
                for (int y = -1; y <= 1; y++)
                    for (int x = -1; x <= 1; x++)
                    {
                        // ����
                        personNum = 0;
                        botNum = 0;
                        emptyNum = 0;

                        // ԭ���겻��
                        if (!(y == 0 && x == 0))
                        {
                            // ÿ����������4����

                            // ����Ұ������֣�������������
                            for (int i = 1; i <= 4; i++)
                            {
                                if (row + i * y > 0 && row + i * y < kBoardSizeNum &&
                                    col + i * x > 0 && col + i * x < kBoardSizeNum &&
                                    gameMapVec[row + i * y][col + i * x] == 1) // ��ҵ���
                                {
                                    personNum++;
                                }
                                else if (row + i * y > 0 && row + i * y < kBoardSizeNum &&
                                         col + i * x > 0 && col + i * x < kBoardSizeNum &&
                                         gameMapVec[row + i * y][col + i * x] == 0) // �հ�λ
                                {
                                    emptyNum++;
                                    break;
                                }
                                else            // ���߽�
                                    break;
                            }

                            for (int i = 1; i <= 4; i++)
                            {
                                if (row - i * y > 0 && row - i * y < kBoardSizeNum &&
                                    col - i * x > 0 && col - i * x < kBoardSizeNum &&
                                    gameMapVec[row - i * y][col - i * x] == 1) // ��ҵ���
                                {
                                    personNum++;
                                }
                                else if (row - i * y > 0 && row - i * y < kBoardSizeNum &&
                                         col - i * x > 0 && col - i * x < kBoardSizeNum &&
                                         gameMapVec[row - i * y][col - i * x] == 0) // �հ�λ
                                {
                                    emptyNum++;
                                    break;
                                }
                                else            // ���߽�
                                    break;
                            }

                            if (personNum == 1)                      // ɱ��
                                scoreMapVec[row][col] += 10;
                            else if (personNum == 2)                 // ɱ��
                            {
                                if (emptyNum == 1)
                                    scoreMapVec[row][col] += 30;
                                else if (emptyNum == 2)
                                    scoreMapVec[row][col] += 40;
                            }
                            else if (personNum == 3)                 // ɱ��
                            {
                                // �����λ��һ�������ȼ���һ��
                                if (emptyNum == 1)
                                    scoreMapVec[row][col] += 60;
                                else if (emptyNum == 2)
                                    scoreMapVec[row][col] += 110;
                            }
                            else if (personNum == 4)                 // ɱ��
                                scoreMapVec[row][col] += 10100;

                            // ����һ�����
                            emptyNum = 0;

                            // ��AI��������
                            for (int i = 1; i <= 4; i++)
                            {
                                if (row + i * y > 0 && row + i * y < kBoardSizeNum &&
                                    col + i * x > 0 && col + i * x < kBoardSizeNum &&
                                    gameMapVec[row + i * y][col + i * x] == 1) // ��ҵ���
                                {
                                    botNum++;
                                }
                                else if (row + i * y > 0 && row + i * y < kBoardSizeNum &&
                                         col + i * x > 0 && col + i * x < kBoardSizeNum &&
                                         gameMapVec[row +i * y][col + i * x] == 0) // �հ�λ
                                {
                                    emptyNum++;
                                    break;
                                }
                                else            // ���߽�
                                    break;
                            }

                            for (int i = 1; i <= 4; i++)
                            {
                                if (row - i * y > 0 && row - i * y < kBoardSizeNum &&
                                    col - i * x > 0 && col - i * x < kBoardSizeNum &&
                                    gameMapVec[row - i * y][col - i * x] == -1) // AI����
                                {
                                    botNum++;
                                }
                                else if (row - i * y > 0 && row - i * y < kBoardSizeNum &&
                                         col - i * x > 0 && col - i * x < kBoardSizeNum &&
                                         gameMapVec[row - i * y][col - i * x] == 0) // �հ�λ
                                {
                                    emptyNum++;
                                    break;
                                }
                                else            // ���߽�
                                    break;
                            }

                            if (botNum == 0)                      // ��ͨ����
                                scoreMapVec[row][col] += 5;
                            else if (botNum == 1)                 // ���
                                scoreMapVec[row][col] += 10;
                            else if (botNum == 2)
                            {
                                if (emptyNum == 1)                // ����
                                    scoreMapVec[row][col] += 25;
                                else if (emptyNum == 2)
                                    scoreMapVec[row][col] += 50;  // ����
                            }
                            else if (botNum == 3)
                            {
                                if (emptyNum == 1)                // ����
                                    scoreMapVec[row][col] += 55;
                                else if (emptyNum == 2)
                                    scoreMapVec[row][col] += 100; // ����
                            }
                            else if (botNum >= 4)
                                scoreMapVec[row][col] += 10000;   // ����

                        }
                    }

            }
        }
