// Address: 0040b394
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040b394(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_200c [4072];
  undefined4 uStack_1024;
  undefined4 uStack_1020;
  undefined4 uStack_101c;
  undefined4 uStack_1018;
  
  puVar1 = (undefined4 *)0x2;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined4 *)((int)puVar2 + -1);
  } while ((undefined4 *)((int)puVar2 + -1) != (undefined4 *)0x0);
  uStack_1018 = 0x40b3c4;
  iVar3 = FUN_00405260(param_2);
  if (iVar3 < 0x1800) {
    uStack_1018 = 0x40b3d3;
    uStack_1018 = FUN_00405260(param_2);
    uStack_1020 = param_4;
    uStack_1024 = 0x40b3ef;
    uStack_101c = param_3;
    iVar4 = FUN_0040afdc(local_200c,0x1fff,param_2);
    iVar3 = 0x2000;
  }
  else {
    uStack_1018 = 0x40b3f9;
    iVar4 = FUN_00405260(param_2);
    iVar3 = iVar4;
  }
  if (iVar4 < iVar3 + -1) {
    uStack_1018 = 0x40b455;
    FUN_004050e4(puVar2,local_200c,iVar4);
  }
  else {
    while (iVar3 + -1 <= iVar4) {
      iVar3 = iVar3 * 2;
      uStack_1018 = 0x40b40f;
      FUN_00404ff0(puVar2);
      uStack_1018 = 0x40b418;
      FUN_004055c4(puVar2,iVar3);
      uStack_1018 = 0x40b420;
      uStack_1018 = FUN_00405260(param_2);
      uStack_1020 = param_4;
      uStack_1024 = 0x40b436;
      uStack_101c = param_3;
      iVar4 = FUN_0040afdc(*puVar2,iVar3 + -1,param_2);
    }
    uStack_1018 = 0x40b445;
    FUN_004055c4(puVar2,iVar4);
  }
  return;
}

