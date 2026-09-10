// Address: 004d2584
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d2584(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0xbe]) {
    if ((char)param_1[0xbe] == '\x02') {
      *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)((int)param_1 + 0x23e);
      *(char *)((int)param_1 + 0x309) = (char)param_1[0x94];
    }
    *(char *)(param_1 + 0xbe) = param_2;
    if (((char)param_1[0xbe] == '\x02') && ((char)param_1[0xb0] != '\0')) {
      FUN_004d0370(param_1,(char)param_1[0xc2]);
      FUN_004d042c(param_1,*(undefined1 *)((int)param_1 + 0x309));
    }
    else if ((char)param_1[0xb0] != '\0') {
      FUN_004d0370(param_1,0);
      FUN_004d042c(param_1,0);
    }
    *(undefined1 *)((int)param_1 + 0x2c3) = 1;
    (**(code **)(*param_1 + 200))();
  }
  return;
}

