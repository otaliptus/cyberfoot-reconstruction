// Address: 00401ab0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401ab0(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  uVar1 = param_1 + 0x3fffU & 0xffffc000;
  uVar2 = param_2 + param_1 & 0xffffc000;
  if (uVar1 < uVar2) {
    FUN_0040187c(uVar1,uVar2 - uVar1,param_3);
    FUN_00401550(&DAT_0066c5fc,param_3,&local_1c);
    if (local_1c != 0) {
      FUN_00401730(local_1c,local_18,&local_14);
      local_1c = local_14;
      local_18 = local_10;
    }
    if (local_1c != 0) {
      FUN_004015c0(&DAT_0066c5fc,&local_1c);
    }
  }
  else {
    *param_3 = 0;
  }
  return;
}

