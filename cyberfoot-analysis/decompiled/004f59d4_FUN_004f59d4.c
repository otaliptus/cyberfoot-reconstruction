// Address: 004f59d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004f59d4(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(*(undefined1 *)(param_2 + 0x3c)) {
  case 0:
    iVar2 = FUN_004f7140(PTR_PTR_004f3fc0,1,param_1);
    break;
  case 1:
    iVar2 = FUN_004f4064(PTR_PTR_004f3cbc,1,param_1);
    break;
  default:
    iVar2 = FUN_004f475c(PTR_PTR_004f3f18,1,param_1);
    break;
  case 3:
    iVar2 = FUN_004f4260(PTR_PTR_004f3d54,1,param_1);
    break;
  case 4:
    iVar2 = FUN_004f4424(PTR_PTR_004f3dec,1,param_1);
    break;
  case 7:
    iVar2 = FUN_004f45c4(PTR_PTR_004f3e80,1,param_1);
    break;
  case 0xb:
    iVar2 = FUN_004f5160(PTR_LAB_004f4c54,1,param_1);
    FUN_004f5198(iVar2,param_2);
  }
  uVar1 = FUN_0042a660(*(undefined4 *)(param_2 + 0x58));
  *(undefined1 *)(iVar2 + 0xc) = uVar1;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 0x34);
  FUN_004f727c(iVar2,0);
  return iVar2;
}

