// ������� �� ������, ������� ������������ Delphi 7
// ��� ������������� ������ Delphi, � ������� ����� TStream.Seek
// �������� � ����������� soFromBeginning/soFromCurrent/soFromEnd -
{$IF CompilerVersion >= 17}
  {$DEFINE UseNewSeek}
{$IFEND}

{$IF CompilerVersion >=20}
  {$DEFINE EncodingPresented}
{$IFEND}

// ������������ �� ����������� ��������� ����� ������ �� ����� � ��������
// ���� ����������������� - ������������ ������ ������
// �������� ���������� MAX_PACKET_SIZE
{.$DEFINE LIMIT_PACKET_SIZE }

{$DEFINE DontAvoidDeferredReceive}

//  ���� Define ������
//  ��� ����������������� ���� ������ ScktComp, ��� ���������
//  ����������� ������ � ���������� IP ������� � ��������/��������� �������� �����.
//  ��� ��� � �������� �������� ���� ����������� ������ ScktComp �� ������,
//  �� ������� ������������ ��� ������� �� � ���� �������� �� ��������.

{.$DEFINE ExtScktComp}