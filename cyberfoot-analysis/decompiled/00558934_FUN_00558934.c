// Address: 00558934
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00558934(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar4 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  iVar2 = FUN_00528684(PTR_PTR_00525340,1);
  *(int *)(param_1 + 0x9c) = iVar2;
  *(int *)(iVar2 + 0x4c) = param_1;
  *(undefined1 **)(iVar2 + 0x48) = &LAB_00559108;
  iVar2 = FUN_00528684(PTR_PTR_00525340,1);
  *(int *)(param_1 + 0x90) = iVar2;
  *(int *)(iVar2 + 0x4c) = param_1;
  *(undefined1 **)(iVar2 + 0x48) = &LAB_00559108;
  *(undefined4 *)(param_1 + 0x94) = 0x1e;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = FUN_0055c940(PTR_PTR_00552188,1,param_1);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  iVar2 = FUN_00528684(PTR_PTR_00525340,1);
  *(int *)(param_1 + 0xac) = iVar2;
  *(int *)(iVar2 + 0x4c) = param_1;
  *(undefined1 **)(iVar2 + 0x48) = &LAB_00559108;
  *(undefined4 *)(param_1 + 0xd8) = 0x32;
  iVar2 = FUN_0055ce78(PTR_PTR_0055269c,1,param_1);
  *(int *)(param_1 + 0xbc) = iVar2;
  *(int *)(iVar2 + 0x24) = param_1;
  *(code **)(iVar2 + 0x20) = FUN_00557fd4;
  *(undefined1 *)(param_1 + 0xc0) = 4;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  iVar2 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(int *)(param_1 + 0xcc) = iVar2;
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00559114;
  iVar2 = FUN_0042a1cc(PTR_PTR_0042893c,1);
  *(int *)(param_1 + 0xd0) = iVar2;
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined1 **)(iVar2 + 8) = &LAB_00559114;
  FUN_0042a5c8(*(undefined4 *)(param_1 + 0xcc),"Tahoma");
  FUN_0042a5c8(*(undefined4 *)(param_1 + 0xd0),"Tahoma");
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 5;
  *(undefined4 *)(param_1 + 0xe0) = 0x4b;
  *(undefined4 *)(param_1 + 0xe4) = 0x32;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x40590000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0xf;
  *(undefined4 *)(param_1 + 0x138) = 0x82;
  *(undefined1 *)(param_1 + 0x134) = 4;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  *(undefined1 *)(param_1 + 0x13d) = 1;
  iVar2 = FUN_0052908c(PTR_PTR_00525d4c,1);
  *(int *)(param_1 + 0x110) = iVar2;
  *(int *)(iVar2 + 0x2c) = param_1;
  *(undefined1 **)(iVar2 + 0x28) = &LAB_005598d8;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 10000;
  *(undefined4 *)(param_1 + 0x158) = 10000;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  uVar3 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  FUN_0043b244(uVar3,*(undefined4 *)(param_1 + 0x15c));
  FUN_0043b234(*(undefined4 *)(param_1 + 0x30),0);
  FUN_0043b254(*(undefined4 *)(param_1 + 0x30));
  if ((((*(byte *)(param_1 + 0x1c) & 0x10) == 0) ||
      ((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 2) != 0)) ||
     ((*(byte *)(*(int *)(param_1 + 4) + 0x1c) & 1) != 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *(char *)(param_1 + 0x88) = cVar1;
  if (cVar1 != '\0') {
    FUN_00559850(param_1);
    FUN_00559c34(param_1,4);
  }
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

