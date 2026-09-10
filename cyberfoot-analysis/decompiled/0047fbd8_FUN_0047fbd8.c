// Address: 0047fbd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0047fbd8(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar4 = extraout_DL;
  }
  FUN_0047f0ec(param_1,0);
  *(undefined4 *)(param_1 + 0x50) = DAT_0047fd4c;
  FUN_00465978(param_1,0);
  FUN_0046599c(param_1,0);
  FUN_004659c4(param_1,0x140);
  FUN_004659e8(param_1,0xf0);
  piVar2 = (int *)FUN_004318d0(PTR_LAB_004294bc,1);
  *(int **)(param_1 + 0x240) = piVar2;
  uVar5 = 0x31;
  uVar3 = (**(code **)PTR_DAT_0066b008)();
  (**(code **)(*piVar2 + 0x40))(piVar2,uVar3,*piVar2,uVar5);
  uVar3 = (**(code **)PTR_DAT_0066b008)();
  (**(code **)(**(int **)(param_1 + 0x240) + 0x34))(*(int **)(param_1 + 0x240),uVar3);
  iVar1 = *(int *)(param_1 + 0x240);
  *(int *)(iVar1 + 0x14) = param_1;
  *(undefined1 **)(iVar1 + 0x10) = &LAB_004804f4;
  uVar3 = FUN_0042acbc(PTR_PTR_00460cd4,1);
  *(undefined4 *)(param_1 + 0x238) = uVar3;
  FUN_00464de4(uVar3,param_1);
  *(undefined1 *)(param_1 + 0x228) = DAT_0047fd50;
  *(undefined1 *)(param_1 + 0x229) = 2;
  *(undefined1 *)(param_1 + 0x22b) = 0;
  *(undefined1 *)(param_1 + 0x231) = 3;
  *(undefined1 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(DAT_0066cbf8 + 0x40);
  *(undefined1 *)(param_1 + 0x235) = 1;
  uVar3 = FUN_004039cc(param_1);
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined1 *)(param_1 + 0x2e1) = 0xff;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  FUN_00480858(param_1,0);
  FUN_004663cc(param_1,0);
  FUN_00466334(param_1,0);
  FUN_0046cc20(param_1,1);
  FUN_00484f54(DAT_0066cbf8,param_1);
  *(undefined4 *)(param_1 + 0x2e4) = 10;
  if (cVar4 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = 0x32;
  }
  return param_1;
}

