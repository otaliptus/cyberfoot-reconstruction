// Address: 00498a2c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00498a2c(int *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int local_1c;
  byte *pbStack_18;
  byte *pbStack_14;
  
  if (param_3 == 0) {
    pbVar4 = (byte *)param_1[param_2 + 0x15];
    local_1c = param_2;
  }
  else {
    pbVar4 = (byte *)param_1[param_2 + 0x19];
    local_1c = param_2 + 0x10;
  }
  if (pbVar4 == (byte *)0x0) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x32;
    *(int *)(iVar2 + 0x18) = local_1c;
    (**(code **)*param_1)();
  }
  if (*(int *)(pbVar4 + 0x114) == 0) {
    FUN_004988fc(param_1,0xc4);
    iVar3 = 0;
    iVar2 = 1;
    pbVar1 = pbVar4;
    do {
      pbVar1 = pbVar1 + 1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + (uint)*pbVar1;
    } while (iVar2 < 0x11);
    FUN_0049891c(param_1,iVar3 + 0x13);
    FUN_004988cc(param_1,local_1c);
    iVar2 = 1;
    pbStack_18 = pbVar4;
    do {
      pbStack_18 = pbStack_18 + 1;
      FUN_004988cc(param_1,*pbStack_18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x11);
    iVar2 = 0;
    pbStack_14 = pbVar4 + 0x11;
    if (0 < iVar3) {
      do {
        FUN_004988cc(param_1,*pbStack_14);
        iVar2 = iVar2 + 1;
        pbStack_14 = pbStack_14 + 1;
      } while (iVar2 < iVar3);
    }
    pbVar4[0x114] = 1;
    pbVar4[0x115] = 0;
    pbVar4[0x116] = 0;
    pbVar4[0x117] = 0;
  }
  return;
}

