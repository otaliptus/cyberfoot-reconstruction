// Address: 0057012c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0057012c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x40))(param_2,0x100);
  (**(code **)(*param_2 + 0x34))(param_2,0x81);
  iVar3 = 0;
  do {
    iVar1 = FUN_004303f0(param_2,iVar3);
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(param_1 + (0xff - (iVar3 + iVar2)) * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x80);
    iVar2 = 0x80;
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(param_1 + (iVar2 - iVar3) * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x100);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x81);
  return;
}

