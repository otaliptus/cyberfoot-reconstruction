// Address: 004204b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004204b0(int *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_18;
  uint local_14;
  
  local_18 = 0;
  uVar3 = 0;
  local_14 = param_1[5] - 1;
  if (local_14 < 0x80000000) {
    do {
      uVar2 = local_14 + uVar3 >> 1;
      iVar1 = (**(code **)(*param_1 + 0x34))
                        (param_1,*(undefined4 *)(param_1[4] + uVar2 * 8),param_2);
      if (iVar1 < 0) {
        uVar3 = uVar2 + 1;
      }
      else {
        local_14 = uVar2 - 1;
        if ((iVar1 == 0) && (local_18 = 1, *(char *)((int)param_1 + 0x1d) != '\x01')) {
          uVar3 = uVar2;
        }
      }
    } while ((int)uVar3 <= (int)local_14);
  }
  *param_3 = uVar3;
  return local_18;
}

