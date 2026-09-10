// Address: 0041a6e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a6e0(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  code *local_10;
  
  local_10 = (code *)param_2[1];
  if (((uint)local_10 & 0xff000000) == 0xff000000) {
    puVar1 = (undefined1 *)FUN_00419c28(*(undefined4 *)*param_2);
    switch(*puVar1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
  }
  else {
    if (((uint)local_10 & 0xff000000) == 0xfe000000) {
      local_10 = *(code **)(*param_1 + (int)(short)local_10);
    }
    if (param_2[4] == -0x80000000) {
      (*local_10)(param_1);
    }
    else {
      (*local_10)(param_1,param_2[4]);
    }
    FUN_00419c28(*(undefined4 *)*param_2);
  }
  return;
}

