// Address: 0048f3e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048f3e0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int local_10;
  uint local_c;
  
  pbVar4 = (byte *)*param_1;
  iVar2 = param_1[1];
  piVar1 = (int *)param_1[4];
  local_10 = param_3;
  local_c = param_2;
  if (piVar1[0x68] == 0) {
    for (; local_10 < 0x19; local_10 = local_10 + 8) {
      if (iVar2 == 0) {
        iVar2 = (**(code **)(piVar1[6] + 0xc))();
        if (iVar2 == 0) {
          return 0;
        }
        pbVar4 = *(byte **)piVar1[6];
        iVar2 = ((undefined4 *)piVar1[6])[1];
      }
      iVar2 = iVar2 + -1;
      uVar3 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
      if (uVar3 == 0xff) {
        do {
          if (iVar2 == 0) {
            iVar2 = (**(code **)(piVar1[6] + 0xc))();
            if (iVar2 == 0) {
              return 0;
            }
            pbVar4 = *(byte **)piVar1[6];
            iVar2 = ((undefined4 *)piVar1[6])[1];
          }
          iVar2 = iVar2 + -1;
          uVar3 = (uint)*pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          piVar1[0x68] = uVar3;
          goto LAB_0048f4b0;
        }
        uVar3 = 0xff;
      }
      local_c = uVar3 | local_c << 8;
    }
  }
  else {
LAB_0048f4b0:
    if (local_10 < param_4) {
      if (*(int *)(piVar1[0x6f] + 8) == 0) {
        *(undefined4 *)(*piVar1 + 0x14) = 0x75;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined4 *)(piVar1[0x6f] + 8) = 1;
      }
      local_c = local_c << (0x19U - (char)local_10 & 0x1f);
      local_10 = 0x19;
    }
  }
  *param_1 = pbVar4;
  param_1[1] = iVar2;
  param_1[2] = local_c;
  param_1[3] = local_10;
  return 1;
}

