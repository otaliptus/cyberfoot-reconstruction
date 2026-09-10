// Address: 00404628
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404628(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x10;
  iVar1 = DAT_00662000;
  do {
    s_Runtime_error_at_00000000_00662094[uVar2 & 0xff] = (char)(iVar1 % 10) + '0';
    iVar1 = iVar1 / 10;
    uVar2 = uVar2 - 1;
  } while (iVar1 != 0);
  uVar3 = 0x1c;
  uVar2 = DAT_00662004;
  do {
    s_Runtime_error_at_00000000_00662094[uVar3 & 0xff] = (&DAT_006620b4)[uVar2 & 0xf];
    uVar2 = uVar2 >> 4;
    uVar3 = uVar3 - 1;
  } while (uVar2 != 0);
  return;
}

