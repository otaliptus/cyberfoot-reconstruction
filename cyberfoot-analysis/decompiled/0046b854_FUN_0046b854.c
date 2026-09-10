// Address: 0046b854
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046b854(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = FUN_0047e4c0(param_1,param_2,param_3,param_3);
  if ((((iVar3 != 0) && (param_1 != iVar3)) && (*(char *)(iVar3 + 0x22d) != '\0')) &&
     (cVar1 = FUN_0046b854(iVar3,param_2), cVar1 != '\0')) {
    return 1;
  }
  uVar2 = FUN_0047e3c8(*(undefined4 *)(param_2 + 8));
  if (((*(byte *)(param_1 + 0x51) & 0x10) == 0) &&
     (FUN_00403c80(param_1,param_2 + 4,uVar2), *(short *)(param_2 + 4) == 0)) {
    return 1;
  }
  return 0;
}

