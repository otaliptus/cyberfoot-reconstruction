// Address: 004fef3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fef3c(int param_1,undefined4 *param_2,char param_3)

{
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  local_1c = *param_2;
  uStack_18 = param_2[1];
  uStack_14 = param_2[2];
  uStack_10 = param_2[3];
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (param_3 == '\0') {
      FUN_004e5608(PTR_DAT_004e5160,*(undefined4 *)(param_1 + 8),&local_1c,0);
    }
    else if (param_3 == '\x01') {
      FUN_004ff2d0(param_1,&local_1c);
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if (param_3 == '\0') {
      FUN_0042b5a8(*(undefined4 *)(param_1 + 8),param_2,0xff,1,1,&local_1c,0);
      (**(code **)PTR_DAT_0066b1cc)();
    }
    else if (param_3 == '\x01') {
      FUN_004ff2d0(param_1,&local_1c);
    }
  }
  return;
}

