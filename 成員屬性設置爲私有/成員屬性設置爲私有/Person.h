#pragma once
// �OӋ���@���
#include <string.h>
#include<iostream>
using namespace std;
class Person
{
public:
    //�O������
    void SetName(string name)
    {
        m_name = name;
    }
    //�@ȡ����
    string GetName()
    {
        return m_name;
    }
    //�@ȡ���g   ���x�Ɍ� ������޸� �����g���������0~150֮�g��
    void  SetAge(int age)
    {
        if (age < 0 || age>150)
        {
            cout << "���g�O���e�`�������0-150�q֮�g" << endl;
            return;  // ��0�q��150�q������˳�����
        }
        m_age = age;        //������Ԓ���xֵ
    }

    int GetAge()
    {
        //m_age = 20;         // ��ʼ����20�q
        return m_age;
    }

    //�O������ֻ��
    void SetLover(string lover)
    {
        m_lover = lover;
    }
    /*   string GetLover()              // ȡ�����@ȡ���ޣ�ʹlover ֻ�܉��O�� �����Ա��@ȡ
       {
           return m_lover;
       }*/
private:
    string m_name;     // ���x�Ɍ� 

    int m_age;           //ֻ�x

    string m_lover;     // ֻ��
};