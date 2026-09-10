// Address: 004a1cdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004a1cdc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_14;
  
  puVar5 = &local_14;
  if ((param_1 == (int *)0x0) || (param_1[7] == 0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    piVar1 = (int *)param_1[7];
    if ((param_1[1] == 0) && ((uint)piVar1[0xf] < 8)) {
      uVar3 = 0xfffffffb;
    }
    else {
      local_14 = param_3;
      if (*piVar1 != 0x1d) {
        *piVar1 = 0x1d;
        piVar1[0xe] = piVar1[0xe] << ((byte)piVar1[0xf] & 7);
        piVar1[0xf] = piVar1[0xf] - (piVar1[0xf] & 7U);
        iVar4 = 0;
        while (7 < (uint)piVar1[0xf]) {
          iVar4 = iVar4 + 1;
          *(char *)puVar5 = (char)piVar1[0xe];
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          piVar1[0xe] = (uint)piVar1[0xe] >> 8;
          piVar1[0xf] = piVar1[0xf] + -8;
        }
        piVar1[0x1a] = 0;
        FUN_004a1c94(piVar1 + 0x1a,&local_14,iVar4);
      }
      iVar4 = FUN_004a1c94(piVar1 + 0x1a,*param_1,param_1[1]);
      param_1[1] = param_1[1] - iVar4;
      *param_1 = *param_1 + iVar4;
      param_1[2] = param_1[2] + iVar4;
      if (piVar1[0x1a] == 4) {
        iVar4 = param_1[2];
        iVar2 = param_1[5];
        FUN_004a03dc(param_1);
        param_1[2] = iVar4;
        param_1[5] = iVar2;
        *piVar1 = 0xb;
        uVar3 = 0;
      }
      else {
        uVar3 = 0xfffffffd;
      }
    }
  }
  return uVar3;
}

