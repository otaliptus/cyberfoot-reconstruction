// Address: 004e907c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e907c(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_004e8690(param_1,0);
  uVar1 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
  *(undefined4 *)(param_1 + 0x238) = uVar1;
  FUN_0043b234(uVar1,0);
  FUN_0043b244(*(undefined4 *)(param_1 + 0x238),300);
  FUN_00403c98(param_1,CONCAT22(extraout_var,0xffb3));
  FUN_0043b254(*(undefined4 *)(param_1 + 0x238));
  uVar1 = FUN_004e7d94(PTR_PTR_004e736c,1,param_1,*(undefined4 *)(param_1 + 0x208));
  *(undefined4 *)(param_1 + 0x23c) = uVar1;
  FUN_004e7aa0(uVar1,0);
  uVar1 = FUN_0043b0ac(PTR_PTR_00438f00,1,0);
  *(undefined4 *)(param_1 + 0x240) = uVar1;
  FUN_0043b234(uVar1,0);
  FUN_0043b244(*(undefined4 *)(param_1 + 0x240),0x32);
  FUN_00403c98(param_1,CONCAT22(extraout_var_00,0xffb2));
  FUN_0043b254(*(undefined4 *)(param_1 + 0x240));
  uVar1 = FUN_004e7d94(PTR_PTR_004e736c,1,param_1,*(undefined4 *)(param_1 + 0x208));
  *(undefined4 *)(param_1 + 0x244) = uVar1;
  FUN_004e7aa0(uVar1,1);
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x249) = 0;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

