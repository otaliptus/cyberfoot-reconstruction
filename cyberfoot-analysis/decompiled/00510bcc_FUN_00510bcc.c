// Address: 00510bcc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00510bcc(int *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar1 = param_1[0x82];
  iVar4 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
  (**(code **)(**(int **)(iVar1 + 0xc) + 8))(*(int **)(iVar1 + 0xc),*(undefined4 *)(iVar4 + 0x58));
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 == '\0') {
    uVar5 = FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),0xff000011);
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x1c8))(param_1,param_2,param_3);
    uVar5 = FUN_0042a3a0(*(undefined4 *)(iVar1 + 0xc),uVar6);
  }
  if ((param_4 & 1) != 0) {
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    bVar3 = FUN_0042a660(uVar6);
    uVar5 = FUN_0042a66c(uVar6,bVar3 | DAT_00510c60);
  }
  return uVar5 & 0xffffff00;
}

