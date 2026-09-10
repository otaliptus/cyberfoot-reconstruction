// Address: 00490b30
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00490b30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iStack_1c;
  int *piStack_18;
  byte *pbStack_14;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  iVar5 = param_2 * 0x200 + -0x200;
  iStack_1c = 0;
  pbStack_14 = &DAT_006654b8;
  piStack_18 = piVar1;
  do {
    iVar7 = 0;
    pbVar4 = pbStack_14;
    piVar6 = piStack_18;
    do {
      iVar3 = (uint)*pbVar4 * -2 + 0xff;
      iVar2 = iVar3 * 0xff;
      if (iVar2 < 0) {
        iVar2 = -((iVar3 * -0xff) / iVar5);
      }
      else {
        iVar2 = iVar2 / iVar5;
      }
      *piVar6 = iVar2;
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar7 < 0x10);
    iStack_1c = iStack_1c + 1;
    pbStack_14 = pbStack_14 + 0x10;
    piStack_18 = piStack_18 + 0x10;
  } while (iStack_1c < 0x10);
  return piVar1;
}

