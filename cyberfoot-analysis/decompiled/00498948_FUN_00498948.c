// Address: 00498948
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00498948(int *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piStack_14;
  
  puVar2 = (ushort *)param_1[param_2 + 0x11];
  if (puVar2 == (ushort *)0x0) {
    iVar5 = *param_1;
    *(undefined4 *)(iVar5 + 0x14) = 0x34;
    *(int *)(iVar5 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  iVar6 = 0;
  iVar5 = 0;
  puVar3 = puVar2;
  do {
    if (0xff < *puVar3) {
      iVar6 = 1;
    }
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar5 < 0x40);
  if (*(int *)(puVar2 + 0x40) == 0) {
    FUN_004988fc(param_1,0xdb);
    if (iVar6 == 0) {
      uVar4 = 0x43;
    }
    else {
      uVar4 = 0x83;
    }
    FUN_0049891c(param_1,uVar4);
    FUN_004988cc(param_1,iVar6 * 0x10 + param_2);
    piStack_14 = &DAT_00665684;
    iVar5 = 0;
    do {
      uVar1 = puVar2[*piStack_14];
      if (iVar6 != 0) {
        FUN_004988cc(param_1,uVar1 >> 8);
      }
      FUN_004988cc(param_1,uVar1 & 0xff);
      iVar5 = iVar5 + 1;
      piStack_14 = piStack_14 + 1;
    } while (iVar5 < 0x40);
    puVar2[0x40] = 1;
    puVar2[0x41] = 0;
  }
  return iVar6;
}

