// Address: 0050789c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050789c(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == '\0') {
    piVar1 = *(int **)(param_1 + 0x510);
    iVar2 = piVar1[0x12];
    iVar3 = piVar1[0x13];
    (**(code **)(*piVar1 + 0x84))(piVar1,*param_2 + -4,param_2[1] + -0xc);
    FUN_00466128(*(undefined4 *)(param_1 + 0x510),1);
    piVar1 = *(int **)(param_1 + 0x588);
    (**(code **)(*piVar1 + 0x84))
              (piVar1,iVar3 + -4,iVar2 + *(int *)(param_1 + 0x2c0) + -1,piVar1[0x13],piVar1[0x12]);
    FUN_00466128(*(undefined4 *)(param_1 + 0x588),1);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x510),0);
    FUN_00466128(*(undefined4 *)(param_1 + 0x588),0);
  }
  return;
}

